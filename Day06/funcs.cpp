// it uses function get and set to private object of class

#include<iostream>
using namespace std;

class student      // class  = userdefined datatype    ,  student  =  object of class
{
     private :   // in private user can't access class variables outside the class hai lekin hm class ke function bna ke use kr skte hai lekin use bhi
    string name;   // public krna pdega
    int age,roll_no;
    string grade;  
  public:

  void set_age(int a)
  {
    age = a;
  }

  void set_roll_no(int r)
  {
     roll_no = r;
  }

  void set_name(string n)
  {
    name = n;
  }

  void set_grade(string g)
  {
      grade  = g;;
  }

  void get_roll_no()
  {
      cout<<roll_no<<" ";
  }

};

int main()
{
    student s1;
    s1.set_age(20);
    s1.set_grade("A++");
    s1.set_name("jitendra");
    s1.set_roll_no(1234);

    s1.get_roll_no();
}