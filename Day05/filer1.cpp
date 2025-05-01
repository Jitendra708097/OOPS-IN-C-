#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter n : ";
    cin>>n;
    ofstream fout;

    fout.open("naturalNo.text");
    for(int i=0;i<n;i++)
    {
        fout<<i<<" ";
    }
}