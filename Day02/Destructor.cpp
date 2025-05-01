// it is last function that is going to be called before an object is destroyed
//  Constructor execute in sequece i.e. provided by coder
//  But destructor is called reverse of constructor i.e. called last function call before destroyed
#include<iostream>
using namespace std;
class consumer
{
    public :
    string name;
    int *data;  // destructor also use release the memory of dynamically allocated before destroyed
     

     // Default constructor
   consumer()
    {
        name = "jitendra";
        data = new int;   // new keyword is allocated memory for data
        *data = 10;  // data is pointed the memory in which 10 is stored
        cout<<name<<" "<<*data<<endl;
    }
    consumer(string name)
    {
       // name = "jitendra";
        this->name = name;
       // data = new int;
       // *data = 10;
        cout<<"constructor is called "<<name<<endl;
    }

    // destructor call ek class me hm ek hi baar destructor create kr skte hai
    ~consumer()
    {
        cout<<"destructor is called "<<name<<endl;
    }
};
int main()
{
    consumer j("1"),j1("2"),j3("3");
    consumer *j4 = new consumer;   // create object dynamically
    delete j4;  // this is destructor call to release memory
}