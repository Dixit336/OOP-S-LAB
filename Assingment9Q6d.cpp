#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ofstream of("tellg.txt");
    of<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    of.close();
    fstream is("tellg.txt",ios::in | ios::out);
    is.seekg(-1,ios::end);
    is.get(ch);
    cout<<ch;
    is.close();
     return 0;
}