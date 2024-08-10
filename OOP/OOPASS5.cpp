/*
Write a function template for selction sort that inputs, sorts and outputs an integer array and float array.
*/

#include<iostream>

using namespace std;

int n;
#define size 10

template<class T>
void sel(T A[size])
{
    int i, j, min;
    T temp;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i; j < n; j++)
        {
            if (A[j]<A[min])
            min = j;
        }
    temp = A[i];
    A[i] = A[min];
    A[min] = temp;
    }
    cout << "\n\nSorted array : ";
    for (i = 0; i < n; i++)
    {
        cout << " " << A[i];
    }
    cout << "\n";
}

int main()
{
    int A[size], i, ch;
    float B[size];
    do
    {
        cout << "\n----------SELECTION SORT SYSTEM----------";
        cout << "\n----------Menu----------";
        cout << "\n1. Integer Values";
        cout << "\n2. Float Values";
        cout << "\n3. Exit";
        cout << "\n\nEnter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "\nEnter Total no. of Integer Elements : ";
            cin >> n;
            cout << "\nEnter Intger Elements : ";
            for (i = 0; i < n; i++)
            {
                cin >> A[i];
            }
            sel(A);
            break;

        case 2:
            cout << "\nEnter Total no. of Float Elements : ";
            cin >> n;
            cout << "\nEnter Float Elements : ";
            for (i = 0; i < n; i++)
            {
                cin >> B[i];
            }
            sel(B);
            break;
     
        case 3:
            exit (0);
        }
    } 
    while (ch != 3);
    return 0;
}