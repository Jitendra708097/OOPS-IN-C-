//same function repeat in code but differ in parameters 
#include<iostream>
using namespace std;
class area
{
    public :
    int calculatearea(int r)
    {
        return 3.14*r*r;
    }
    int calculatearea(int l,int b)
    {
        return l*b;
    }

     int calculatearea(int l,int b)
    {
        return l+b;
    }
};
int main()
{
    area a1;
    cout<<a1.calculatearea(4,5);
    cout<<a1.calculatearea(4,2);
}