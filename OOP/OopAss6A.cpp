/*
Write a c++ program using STL for sorting and searching user defined 
records such as personal records (Name, DOB, Telephone number, etc) 
using vector container

*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Personal
{
    public:
        char name[30], DOB[20];
    int phone;
    int rollno;
    bool operator == (const Personal & i1)
    {
        if (rollno == i1.rollno)
        return 1;
        return 0;
    }
    bool operator < (const Personal & i1)
    {
        if (rollno < i1.rollno)
        return 1;
        return 0;
    }
};

vector <Personal> o1;
void print (Personal & i1);
void display();
void insert();
void search();
void dlt();
bool compare(const Personal & i1, const Personal & i2)
{
    return i1.rollno < i2.rollno;
}

int main()
{
    int ch;
    do
    {
        cout << "\n-----Menu-----";
        cout << "\n1. Insert";
        cout << "\n2. Display";
        cout << "\n3. Search";
        cout << "\n4. sort";
        cout << "\n5. Delete";
        cout << "\n6. Exit";
        cout << "\n\nEnter your choice :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            display();
            break;

        case 3:
            search();
            break;

        case 4:
            sort(o1.begin(), o1.end(), compare);
            cout << "\n\nSorted by Roll Number : ";
            display();
            break;

        case 5:
            dlt();
            break;

        case 6:
            exit(0);
        
        default:
            break;
        }

    } while (ch != 7);
    return 0;
}

void insert()
{
    Personal i1;
    cout << "\nEnter your name :";
    cin >> i1.name;
    cout << "\nEnter DOB :";
    cin >> i1.DOB;
    cout << "\nEnter phone number :";
    cin >> i1.phone;
    cout << "\nEnter roll number :";
    cin >> i1.rollno;
    o1.push_back(i1);
}

void display()
{
    for_each(o1.begin(), o1.end(), print);
}

void print(Personal & i1)
{
    cout << "\n";
    cout << "\nName : " << i1.name;
    cout << "\nDOB : " << i1.DOB;
    cout << "\nPhone Number : " << i1.phone;
    cout << "\nRoll Number : " << i1.rollno;
    cout << "\n";
}

void search()
{
    vector <Personal> :: iterator p;
    Personal i1;
    cout << "\nEnter roll number to search : ";
    cin >> i1.rollno;
    p = find(o1.begin(), o1.end(), i1);
    if (p == o1.end())
    {
        cout << "\nNot found!!!";
    }
    else
    {
        cout << "\nFound!!!";
    }
}

void dlt()
{
    vector <Personal> :: iterator p;
    Personal i1;
    cout << "\nEnter roll number to delete : ";
    cin >> i1.rollno;
    p = find(o1.begin(), o1.end(), i1);
    if (p == o1.end())
    {
        cout << "\nNot found!!!";
    }
    else
    {
        o1.erase(p);
        cout << "\nDeleted!!!";
    }
}