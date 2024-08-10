/*

Problem Statement 1: Department maintains a student information. The file contains roll number, name, division and address. Allow user to add, delete information of student. Display information of particular student. If record of student does not exist an appropriate message is displayed. If it is, then the system displays the student details.
Use sequential file to main the data. 
*/

#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
class Student{
    public:
    int roll;
    char name[30];
    char division;
    char address[50];
    //function for accepting data
   
    void setdata(){
       cout<<"Enter the following:"<<endl;
       cout<<"Enter roll no:"<<endl;
       cin>>roll;
       cout<<"Enter the Name:"<<endl;
       cin>>name;
       cout<<"Enter the division:"<<endl;
       cin>>division;
       cout<<"Enter the address:"<<endl;
       cin>>address;
    }
    void showdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No.:"<<roll<<endl;
        cout<<"Division:"<<division<<endl;
        cout<<"Address is"<<address<<endl;
    }};
    void write_record(){
        ofstream outFile;
        outFile.open("student.dat",ios::binary| ios::app);
        Student obj;
        obj.setdata();
        outFile.write((char*)&obj,sizeof(obj));
        outFile.close();
    }
    void display(){
        ifstream inFile;
        inFile.open("student.dat",ios::binary);
        Student obj;
        while (inFile.read((char*)&obj,sizeof(obj))){
            obj.showdata();
        }
        inFile.close();
    }
    int search(int n){
        ifstream inFile;
        bool flag=false;
        inFile.open("student.dat",ios::binary);
        Student obj;
        while (inFile.read((char*)&obj,sizeof(obj))){
            if(obj.roll==n){
                flag=true;
                obj.showdata();
                return 1;
                break;
            }

            }
            if(flag==false){
                cout<<"record of rollno not found"<<endl;
                return 0;

            }
            inFile.close();

        }
    void delete_record(int n){
        Student obj;
        ifstream inFile;
        inFile.open("student.dat",ios::binary);
        ofstream outFile;
        outFile.open("temp.dat",ios::out|ios::binary);
        int a=search(n);
        if(a==1){
            while(inFile.read((char*)&obj,sizeof(obj))){
                if(obj.roll !=n)
                {
                    outFile.write((char*)&obj,sizeof(obj));

                }

            }
        inFile.close();
        outFile.close();
        remove("student.dat");
        remove("temp.dat");
    }
      else{
        cout<<"Not present in the file";
      }  
}

int main(){
    int ch;
    cout<<"\n1.Add record";
    cout<<"\n2.Display Record";
    cout<<"\n3.Search Record";
    cout<<"\n4.Delete a particular from Record";
    cout<<"\nEnter your choice";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"Enter number of records ";
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
        write_record();
        }
        break;
        case 2:
        cout<<"List of Records"<<endl;
        display();
        break;
        case 3:
        cout<<"Enter the Student to be searched"<<endl;
        int j;
        cin>>j;
        search(j);
        break;
        case 4:
        cout<<"Enter the Student to be deleted"<<endl;
        int k;
        cin>>k;
        delete_record(k);
        cout<<"Deletion Successful"<<endl;
        break;
    }
return 0;
}

/*

Output :-

1.Add record
2.Display Record
3.Search Record
4.Delete a particular from Record
Enter your choice1
Enter number of records 2
Enter the following:
Enter roll no:
1
Enter the Name:
AB
Enter the division:
A
Enter the address:
Pune
Enter the following:
Enter roll no:
2
Enter the Name:
CD
Enter the division:
B
Enter the address:
Mumbai

1.Add record
2.Display Record
3.Search Record
4.Delete a particular from Record
Enter your choice2
List of Records
Name:AB
Roll No.:1
Division:A
Address isPune
Name:CD
Roll No.:2
Division:B
Address isMumbai

1.Add record
2.Display Record
3.Search Record
4.Delete a particular from Record
Enter your choice3
Enter the Student to be searched
1
Name:AB
Roll No.:1
Division:A
Address isPune

*/