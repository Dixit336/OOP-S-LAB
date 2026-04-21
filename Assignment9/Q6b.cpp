#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    string ch;
    ofstream of("seekp.txt");
    of<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    of.close();
    fstream si("seekp.txt",ios::in| ios::out);
    si.seekp(6,ios::beg);
    si<<'x';
    si.close();
    return 0;
}
