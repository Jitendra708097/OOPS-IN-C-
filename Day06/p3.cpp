#include<iostream>
using namespace std;

class operatoroverloading
{
    int real;
    int imaginary;

    public:

    operatoroverloading()
    {

    }

    operatoroverloading(int real,int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    operatoroverloading operator +(operatoroverloading &C)
    {
        operatoroverloading A14;
        A14.real = real+C.real;
        A14.imaginary = imaginary+C.imaginary;
        return A14;
    }

    void display()
    {
        cout<<real<<" + i"<<imaginary<<endl;
    }
};
int main()
{
    operatoroverloading A1(4,2);
    operatoroverloading A2(5,4);
    operatoroverloading A3 = A1 + A2;
    A1.display();
    A2.display();
    A3.display();
}