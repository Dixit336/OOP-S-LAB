#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(){
    length=0;
    breadth=0;
    }
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }

    rectangle(int x){
        length=x;
        breadth=x;
    }
     int area(){
        return length*breadth;
    }
};
int main(){
    rectangle r1;
    rectangle r2(5,3);
    rectangle r3(2);
    cout<<r1.area()<<endl;
    cout<<r2.area()<<endl;
    cout<<r3.area()<<endl;
      return 0;
}