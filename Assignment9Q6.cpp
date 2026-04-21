#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ofstream of("seekg.txt");
    of<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    of.close();
    ifstream is("seekg.txt");
    is.seekg(10,ios::beg);
    is.get(ch);
    cout<<ch;
    is.close();
    return 0;
}