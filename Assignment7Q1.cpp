#include<iostream>
using namespace std;
class polygon{
    protected:
    int width;
    int height;
    public:
    void setvalue(){
        cout<<"Enter the width"<<endl;
        cin>>width;
        cout<<"Enter the Height"<<endl;
        cin>>height;
    }
    virtual void area()=0;
};
class triangle:public polygon{
    public:
    virtual void area(){
        cout<<"Area of triangle: "<<0.5*(width*height)<<endl;
    }
};
class rectangle:public polygon{
    public:
    virtual void area(){
        cout<<"Area of rectangle: "<<width*height<<endl;
    }
};
int main(){
    polygon *p;
    triangle t;
    rectangle r;
    p=&t;
    p->setvalue();
    p->area();
    p=&r;
    p->setvalue();
    p->area();
    return 0;
}