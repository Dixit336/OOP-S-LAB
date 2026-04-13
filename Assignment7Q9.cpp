#include<iostream>
using namespace std;
class Demo{
    public:
    void operator()(int a,int b,int c){
        cout<<"Values: "<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main(){
    Demo d;
    d(10,20,30);
    return 0;
}