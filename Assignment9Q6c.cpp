#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string ch;
    ofstream of("tellg.txt");
    of<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    of.close();
    fstream is("tellg.txt",ios::in | ios::out);
    is.seekg(0,ios::end);
    cout<<"The length of the string is: "<<is.tellg()<<endl;
    is.close();
     return 0;
}