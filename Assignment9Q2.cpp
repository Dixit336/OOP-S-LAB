#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream is("Notes.txt");
    if(!is){
        cout<<"File doesnt exist"<<endl;
        return -1;
    }
    int count=0;
    char ch;
    while(is.get(ch)){
        if((ch >= 'A' && ch <= 'Z') || (ch >='a' && ch<='z')){
            count++;
        }
    }
    is.close();
    cout<<count;
    return 0;
    
}