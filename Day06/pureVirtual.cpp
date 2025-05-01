#include<iostream>
#include<vector>
using namespace std;

class Animal
{
    public:
     virtual void speak() = 0; // this is a pure virtual function(abstruct function)
};

class Dog : public Animal
 {
    public:
    void speak()
    {
        cout<<"Bark\n";
    }
 };

 class cat : public Animal
 {
    public:
    void speak()
    {
        cout<<"Meow\n";
    }
 };


int main()
{
  Animal *A1;
//   A1 = new Dog();
//   (*A1).speak();

vector<Animal*>animals;
animals.push_back(new Dog());
animals.push_back(new cat());
animals.push_back(new Dog());
animals.push_back(new cat());
animals.push_back(new Dog());

for(int i=0;i<animals.size();i++)
{
    animals[i]->speak();
}

}