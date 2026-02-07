#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l,int b){
        this->breadth=b;
        this->length=l;
    }
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }

};
int main(){
rectangle* ptr;
ptr=new rectangle(10,5);
cout<<"Area of the rectangle is:"<<ptr->area()<<endl;
cout<<"Perimeter of the rectangle is:"<<ptr->perimeter()<<endl;

delete ptr;
return 0;

}
