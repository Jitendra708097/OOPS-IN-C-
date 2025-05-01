#include<iostream>
#include<exception>
using namespace std;
int main()
{
    try{
    int *p = new int [1000000000];
    cout<<"memory allocation is successful : ";
    delete[]p;
    }
    catch(const exception &e)
    {
        cout<<"Exception Occured : "<<e.what()<<endl;
    }
}