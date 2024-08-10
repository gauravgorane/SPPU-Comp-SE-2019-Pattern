/*

Imagine a publishing company which does marketing for book and audio cassette versions.
Create a class publication that stores the title (a string) and price (type float) of publications.
From this class derive two classes: book which adds a page count (type int) and tape which
adds a playing time in minutes (type float).
Write a program that instantiates the book and tape class, allows user to enter data and
displays the data members. If an exception is caught, replace all the data member values with
zero values.

*/

#include<iostream>
#include<stdio.h>

using namespace std;
class publication //Declaring class publication 
{
    private:
    string title;
    float price;
    public:
        void add()
        {
            cout << "\n---------Enter the publication information---------" << endl;
            cout << "Enter title of the publication :";
            cin.ignore();
            getline(cin,title);
            cout << "Enter price of publication :";
            cin >> price;
        }
    
    void display()
    {
        cout << "\n-------------------------------------";
        cout << "\nTitle of publication :" << title;
        cout << "\nPublication price :" << price;
    }
    
};

class book : public publication // declaring class book which inherits class publication in public mode.
{
    private : int page_count;
    public : void add_book()
    {
        try
        {
            add();
            cout << "Enter page count of book :";
            cin >> page_count;
            if (page_count <=0)
            {
                throw page_count;
            }
        }
        catch(...)
        {
            cout << "\nInvlaid page count!!!";
            page_count = 0;
        }
    }

    void display_book()
    {
        display();
        cout << "\nPage count :" << page_count;
        cout << "\n--------------------------------------\n";
    }

};

class tape : public publication //declaring class tape which inherits class publication in public mode
{
    private : float play_time;
    public : void add_tape()
    {
        try
        {
            add();
            cout << "Enter play duration of the tape :";
            cin >> play_time;
            if (play_time <= 0)
            throw play_time;
        }
        catch(...)
        {
            cout << "\nInvalid play time!!!";
            play_time = 0;
        }            
    }

    void display_tape()
    {
        display();
        cout << "\nPlay time :" << play_time << " min";
        cout << "\n-------------------------------------\n";
    }
};

int main()
{
    book b1[10]; // object of the class book
    tape t1[10]; // object of class tape
    int ch, b_count  = 0, t_count = 0;
    do
    {
        cout << "\n-----------Publication database system-------";
        cout << "\n----------------Menu--------------";
        cout << "\n1. Add information to book";
        cout << "\n2. Add information to tapes";
        cout << "\n3. Display books information";
        cout << "\n4. Display tapes information";
        cout << "\n5. Exit";
        cout << "\n\nEnter your choice :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            b1[b_count].add_book();
            b_count++;
            break;
        
        case 2:
            t1[t_count].add_tape();
            t_count++;        
            break;

        case 3:
            cout << "\n-----------Book Publication database system-------";
            for (int j = 0; j <b_count; j++)
            {
                b1[j].display_book();
            }
            break;

        case 4:
            cout << "\n----------- Tape Publication database system-------";
            for (int j = 0; j < t_count; j++)
            {
                t1[j].display_tape();
            }
            break;

        case 5:
            exit(0);
        }

    } while (ch!= 5);
    return 0;     
};
