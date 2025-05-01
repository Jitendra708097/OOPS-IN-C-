#include<iostream>
#include<exception>
using namespace std;
int main()
{
  try
 {
    int *arr = new int[10000000000];
    cout<<"Memory allocation successfully done : "<<endl;
    delete[]arr;
 }
    catch(const exception &e)
    {
        cout<<"Exception occured : "<<e.what()<<endl;
    }
}