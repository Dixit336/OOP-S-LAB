#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imaginary;
    public:
    complex(int i,int r){
        real=r;
        imaginary=i;
    }
    complex(const complex&c){
        real=c.real;
        imaginary=c.imaginary;
    }
    void display(){
        cout<<real <<" + "<<imaginary<<"i"<<endl;
    }
    friend complex sum(complex,complex);
};
complex sum(complex c1,complex c2){
    complex temp(0,0);
    temp.real=c1.real+c2.real;
    temp.imaginary=c1.imaginary+c2.imaginary;
    return temp;
}
int main(){
    complex c1(5,10),c2(10,5);

    complex result=sum(c1,c2);

    cout<<"First Complex: ";
    c1.display();
    cout<<"Second Complex: ";
    c2.display();

    cout<<"Sum: ";
    result.display();
    return 0;
}