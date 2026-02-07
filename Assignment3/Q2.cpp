#include<iostream>
using namespace std;
class B;
class A{
    int x;
    public:
    A(int x){
        this->x=x;
    }
    void display(){
        cout << "A.x = " << x << endl;
    }

    friend void swapValues(A &,B &);
};
class B{
    int y;
    public:
    B(int y){
        this->y=y;
    }
     void display(){
        cout << "B.y = " << y << endl;
    }
    friend void swapValues(A &,B &);
};
void swapValues(A &obj1,B &obj2){
    int temp;
    temp=obj1.x;
    obj1.x=obj2.y;
    obj2.y=temp;
}
int main(){
    A a1(10);
    B b1(20);

    cout << "Before Swapping" << endl;
    a1.display();
    b1.display();
    swapValues(a1, b1);
    cout << "After Swapping" << endl;
      a1.display();
    b1.display();
    return 0;
}
