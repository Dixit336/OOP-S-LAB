#include<iostream>
using namespace std;
class B;
class A{
    private:
    int x;
    public:
    A(int val){
        x=val;
    }
    friend int add(A,B);
};
class B{
    private:
    int y;
    public:
    B(int val){
        y=val;
    }
    friend int add(A,B);
};
int add(A obj1,B obj2){
    return obj1.x+obj2.y;
}
int main(){
    A a(5);
    B b(10);
    cout<<"Sum: "<<add(a,b);
    return 0;
}