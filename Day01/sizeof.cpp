#include<iostream>
using namespace std;
class Student
{     
    int n;
    char c;
};

class Student1
{  
    char c;
    char b;   
    int n;
    double b1;
};

int main()
{
    cout<<sizeof(Student)<<endl;   // it print 8 instead of 5 because it using padding
                            // for segmentation for OS execute instruction
    cout<<sizeof(Student1)<<endl;
}