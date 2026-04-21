#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    ofstream of("data.txt");
    of<<"This is a example of mulitple lines\nso we can enjoy the party\nanyways bye guys";
    of.close();
    ifstream fs("data.txt");
    fs.seekg(10,ios::beg);
    cout<<"Current position: "<<fs.tellg()<<endl;
    char ch;
    while (fs.get(ch))
    {
        cout<<ch;
    }
    fs.close();
    return 0;
}
