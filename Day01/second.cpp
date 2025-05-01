#include<iostream>
using namespace std;

class Student
{                    // if we want to access class element out of class then we functions but function ko public banana pdega
    string name;
    int age,roll_no;
    string course;

    public:
    void setage(int a)  // these function assigns value 
    {
        age = a;
    }

    void setname(string a)
    {
        name = a;
    }

    void setcourse(string a)
    {
        course = a;
    }

    // through getter we print these values 
    void getter()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<course;
    }
};

int main()
{
   Student S1;
   Student S2;
   Student S3;
   S1.setage(20);
   S1.setcourse("BTech");
   S1.setname("Jitendra");

   S2.setage(22);
   S2.setcourse("BTech");
   S2.setname("Anshul Yadav");

   S3.setage(23);
   S3.setcourse("BTech");
   S3.setname("Ravi yadav");

   S1.getter();
   cout<<endl;
   S2.getter();
   cout<<endl;
   S3.getter();

}