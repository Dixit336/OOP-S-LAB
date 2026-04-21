#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    string ch="Hello world";
    ofstream of("world.txt");
    of<<"Hello World";

    for (int i = 0; i < ch.length(); i++)
    {
        of.put(ch[i]);
        cout<<"Position "<<ch[i]<<" : "<<of.tellp()<<endl;
    }
    
    of.close();
    fstream fs("world.txt",ios::in | ios::out);
    fs.seekp(6,ios::beg);
    fs<<"C++";
    fs.close();
    return 0;
}
