#include<iostream>
#include<fstream>


using namespace std;
int main()
{
    // file ko open krna
    // create object
    ofstream fout;
    fout.open("first.text");  // if file is not exist then it will create

    // write in file
    fout<<"Hello india";

    fout.close();
}
