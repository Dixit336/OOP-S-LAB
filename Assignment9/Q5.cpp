#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int length=s.length();
    ofstream of("String.txt");
    of<<s;
    of.close();
    cout<<"String is written successfully to the file"<<endl;
    ifstream is("String.txt");
    string ch;
    getline(is,ch);
    cout<<"String is: "<<ch;
    return 0;
}
