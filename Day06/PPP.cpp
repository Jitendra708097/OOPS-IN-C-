// private>protected>public
#include<iostream>
using namespace std;
class human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    // we can access with in class

    void func()
    {
        a=70;
        b=77;
        c=88;
    }

    void display()
    {
        cout<<"A is"<< a<<" "<<"B is "<<b<<" "<<"C is "<<c;
    }
};
int main()
{
    human jitendra;
    // jitendra.a = 10;  //  we can't access in external code
    // jitendra.b = 20;  // we can't access in external code
    jitendra.c = 30;
    jitendra.display();
}