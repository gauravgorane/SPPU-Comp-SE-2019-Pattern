/*

A palindrome is a string of character that's the same forward and backward. Typically, puntuation, capitalization, and spaces are ingnored. For example, "Poor Dan is in a droop" is a palindrome, as can be seen by examining the character "poor danisina droop" and observing that they are the same forward and backward. One way to check for a palindrome is to reverse the charcters in the string and then compare with them the original in a palindrome, the sequence will be identical. Write C++ program with functions-
a) To print original string followed by reversed string using stack
b) To check whether given string is palindrome or not

*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack <char> stack;
    string str;
    string final;
    bool isPalindrome = true;

    cout << "---- Palindrome Checker ----" << endl;
    cout << "Enter a string (in lowercase only without symbol) : ";
    getline(cin, str);
    for (int i = 0; i  < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            final += str[i];
            stack.push(str[i]);
        }
    }

    cout << "\nEntered string is : " << final;
    int size = stack.size();
    cout << "\nReversed string is : ";

    for (int i = 0; i < size; i++)
    {
        cout << stack.top();
        if (final[i] != stack.top())
        {
            isPalindrome = false;
        }
        stack.pop();
    }
    
    cout << endl;

    if (isPalindrome) {
        cout << "\n---- String is Palindrome ----" << endl;
    } else {
        cout << "\n---- String is not a palindrome ----" << endl;
    }

    return 0;
}
