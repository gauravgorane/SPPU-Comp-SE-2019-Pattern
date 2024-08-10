/*

Implement a class Complex which represents the Complex Number data type. Implement the following operations:
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.

*/

#include <iostream>

using namespace std;

class complex
{
    public:
    float real, img;

    complex() //1 . Default constructor
    {
        real = 0;
        img = 0;
    }

    complex operator + (complex);
    complex operator * (complex);
    friend ostream & operator << (ostream & , complex &);
    friend istream & operator << (istream & , complex &);
};

//Overloaded operator >>
istream & operator >> (istream & is, complex & obj )
{
    is >> obj.real;
    is >> obj.img;
    return is;
}

//Overloaded operator <<
ostream & operator << (ostream & outt, complex & obj )
{
    outt << "" << obj.real;
    outt << "+" << obj.img << "i";
    return outt;
}

//Overloaded operator +
complex complex::operator + (complex obj)
{
    complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return (temp);
}

//Overloaded operator *
complex complex::operator * ( complex obj )
{
    complex temp;
    temp.real = real * obj.real - img * obj.img;
    temp.img = real * obj.img + img * obj.real;
    return (temp);
}

//Main Function
int main()
{
    complex a, b, c, d;
    cout << "1st Complex Number - Enter Real and Imaginary\n";
    cin >> a;
    cout << "2nd Complex Number - Enter Real and Imaginary\n";
    cin >> b;
    cout << "\nArithmetic Operation :";
    c = a + b;
    cout << "\nAddition ="<<c;
    d = a * b;
    cout << "\nMultipication = "<<d;
    return 0;
}