#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream in("NUM.txt");
    ofstream out("Notes.txt",ios::app);
    char ch;
    while(in.get(ch)){
        out<<ch;
    }
    cout<<"Contents have been written to the another file successfully"<<endl;
    return 0;
}
