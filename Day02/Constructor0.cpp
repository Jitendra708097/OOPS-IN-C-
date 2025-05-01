// Constructor : it is used to initiliaze the value
// class name and contructor name same hote hai

#include<iostream>
using namespace std;
class student
{
    public :
    string name;
    int age;
    int roll_no;
    // Default constructor
   student()
    {
        name = "jitendra";
        age = 20;
        roll_no = 220;
    }
    
    // Parametrized Constructor
    student(int age,int roll_no,string name)
    {
       this-> name = name;
       this-> age = age;   // this -> is a pointer who pointed the object
       this-> roll_no = roll_no;
    }
    
    // Contructor overloading
    student( string a,int k)    // constructor overloading = ek se jyada constructor ek hi name ke ho aur different paramter ho 

    {
        name = a;
        age = k;
    }


    // inline constructor
    inline student(string n,int f,int s) : name(n),age(f),roll_no(s)
    {

    }
    
    // copy contructor jo ab by default create nhi hoga
    student(student &b)
    {
        name = b.name;
        age =b.age;
        roll_no = b.roll_no;;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_no<<endl;
    }
};
int main()
{
    student j,j5;
    student j1(20,500,"jit");
    student j2("anshul yadav",30);
    student j3("akashvani",22,222);
    j.display();
    j1.display();
    j2.display();
    j3.display();
    student j4(j3);  // this is copy Constructor jo ki by default present hota hai class ke andar
    j4.display();
    j5 = j3;  // this is another way to copy j3 constructor in j5 i.e. assigning method
    j5.display();
}