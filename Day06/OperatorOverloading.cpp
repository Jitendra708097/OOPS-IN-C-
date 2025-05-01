#include<iostream>
using namespace std;
class Complex
{
    int real ,imaginary;
    public :
    Complex()
    {

    }
    Complex(int real ,int imaginary)
    {
        this->real  = real;
        this->imaginary = imaginary;
    };
    void display()
    {
        cout<<real<<"+i"<<imaginary;
    }
    Complex operator (Complex &c)
    {

    }
}