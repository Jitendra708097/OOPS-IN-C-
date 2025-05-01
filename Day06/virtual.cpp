#include<iostream>
using namespace std;

 class Animal
{
    public:

   virtual void speak()
    {
        cout<<"Hu Hu Hu \n";
    };
};

class dog : public Animal
{
    public:
    void speak()
    {
        cout<<"Bark \n";
    }
};

int main()
{
     Animal *a1;
     a1 = new dog();
     a1->speak();
}