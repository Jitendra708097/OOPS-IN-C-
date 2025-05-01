#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    try{
        // if(b == 0)
        // throw "Zero can't divide any value";
        int c = a/b;
        cout<<c;
    }
    // catch(const char *e)
    catch(const exception &e)
    {
        cout<<"Exception occured : "<<e.what();
    }
}