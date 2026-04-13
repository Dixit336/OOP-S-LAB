#include<iostream>
using namespace std;
template<class T1,class T2>
class Mypair{
    private:
    T1 a;
    T2 b;
    public:
    Mypair(T1 x,T2 y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"The pair is: "<<a<<" "<<b<<endl;
    }
};
int main(){
    Mypair<int,int> p(5,10);
    p.show();
    return 0; 
}