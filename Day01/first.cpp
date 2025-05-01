#include<iostream>
using namespace std;
class Student
{
    public:   // without public we can't access class element
    string name;
    int age,roll_no;
    string course;
};

int main()
{
   Student s1;   // student is userdefined datatype and s1 is like variable but in oops it call object
   s1.name = "Jitendr";
   s1.age = 20;
   s1.roll_no = 22010039;

//    print the value of class elements
    cout<<s1.age<<" "<<s1.name<<" "<<s1.roll_no<<endl;
}
