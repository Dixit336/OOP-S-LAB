#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    public:
    void setDim(int l,int w){
        length=l;
        width=w;
    }
    float area(){
        return length*width;
    }
    void getDim(){
        cout<<"Lenght is:"<<length<<endl;
        cout<<"Width is:"<<width<<endl;
    }
};
int main(){
Rectangle r;
r.setDim(5,10);
cout<<"Area of rectangle is:"<<r.area()<<endl;
r.getDim();
return 0;
}
