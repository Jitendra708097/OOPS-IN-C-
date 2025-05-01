#include<iostream>
using namespace std;

class stack
{
   int *arr;
   int n;
   int size;

   public:
   stack(int n)
   {
        this->n = n;
        arr  = new int[n];
        size = 0;
   }

//    pushed into stack 
   void push(int element)
   {
    if(size>n)
    {
        cout<<"Stack Overflow"<<endl;
    }

    else
    {
        cout<<element<<" Pushed into stack"<<endl;
        arr[size] = element;
        size++;
    }
   }

//   pop from stack 
   void pop()
   {
    if(size<0)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        size--;
        cout<<arr[size]<<" Poped from Stack"<<endl;
    }
   }

   void top()
   {
    if(size<=0)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Top element of stack: "<<arr[--size]<<endl;
    }
    
   }

   void display()
   {
      if(size == 0)
      {
        cout<<"Stack is empty"<<endl;
      }

      else
      {
        for(int i= size-1;i>=0;i--)
        {
            cout<<arr[i]<<endl;
        }
      }
   }
};

int main()
{
  stack s1(14);
  s1.push(5);
  s1.push(50);
  s1.push(500);
  s1.push(5000);
  s1.push(50000);
  s1.push(500000);
  s1.push(5000000);
  s1.push(50000000);
  s1.push(550000000);
  s1.push(5500);

  s1.push(5);
  s1.push(50);
  s1.push(500);
  s1.push(5000);
  s1.push(50000);
  s1.push(500000);
  s1.push(5000000);
  s1.push(50000000);
  s1.push(550000000);
  s1.push(5500);
  s1.push(5494916);
//   s1.pop();
  s1.top();

//   display all element of stack 
s1.display();
}