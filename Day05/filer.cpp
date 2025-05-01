#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main()
{
    /*
    ifstream fin;
    // file ko open kro 
    fin.open("first.text");
    // read file
    char c;
    c = fin.get();
    while (!fin.eof())  // eof = end of file
    {
        cout<<c;
        c = fin.get();
    }

    fin.close();

    */
   ofstream fout;
   fout.open("string.text");
   fout<<"Hi jitendra\n";
   fout<<"How are you\n";
   fout<<"I am fine\n";
   fout<<"I hope you are doing well\n";

   fout.close();

   // ab har line ko ek read krna hai vo bhi full line

   ifstream fin;
   fin.open("string.text");
   string line;
   while(getline(fin,line))
   {
    cout<<line<<endl;
   }

   fin.close();
    
}