#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    A(int x){
        this->x=x;
    }
    friend int add(A,B);
};
class B{
    int y;
    public:
    B(int y){
        this->y=y;
    }
    friend int add(A,B);
};
int add(A a,B b){
    return a.x+b.y;
}
int main(){
    A a1(10);
    B b1(20);
    cout<<"The sum is:"<<add(a1,b1);
    return 0;
}
