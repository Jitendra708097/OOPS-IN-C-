#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age,roll_no;
    string course;
    string branch;
   

    inline student(string name1,int age1,int roll_no1,string course1): name(name1),age(age1),roll_no(roll_no1),course(course1){

    }

    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll_no<<endl;
        cout<<course<<endl;
    }
};

int main()
{
  student S1("jitendra",22,220194,"BTech");
  S1.display();
}