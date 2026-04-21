#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream os("NUM.txt");
    if(!os){
        cout<<"File doesnot exist";
        return 1;
    }
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        os<<i<<endl;
    }
    os.close();
    cout<<"Numbers successfully written to the file: "<<endl;
    return 0;
}