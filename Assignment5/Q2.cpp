#include<iostream>
using namespace std;
class parent{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};
class child:public parent{
public:
int b=10;
void fun(){
    cout<<"The value of protected function of parent class in child class is:"<<b<<endl;
}
};
int main(){
    child c;
    c.fun();
}
