#include<iostream>
using namespace std;
 

// This is a one more example of function overloading in which
// we multiple function of same name
class variable
{
    public:

    int calculatearea(int r)  // calculate area of square
    {
        return r*r;
    }

   int calculatearea(int length,int width)  // Area of Rectangle
   {
    return length*width;
   }

   int calculatearea(int length,int width,int heigth)  // perimeter of cuboid
   {
    return length*width*heigth;
   }
    
};

int main()
{
  variable A1;
  cout<<A1.calculatearea(4)<<endl;
  cout<<A1.calculatearea(4,5)<<endl;
  cout<<A1.calculatearea(2,3,4);
}