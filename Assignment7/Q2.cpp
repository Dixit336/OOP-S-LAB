#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculateArea(){
             cout<<"Calculating area: "<<endl;
    }
    virtual void display(){
        cout<<"This is a shape "<<endl;
    }
};
class circle:public shape{
    private:
    float r;
    public:
    circle(float r){
        this->r=r;
    }
    void calculateArea(){
             cout<<"The area of the circle is: "<<3.14*r*r<<endl;
    }
    void display(){
        cout<<"Shape:Circle"<<endl;
    }
};
class rectangle:public shape{
    private:
    float l,b;
    public:
    rectangle(float l,float b){
        this->l=l;
        this->b=b;

    }
    void calculateArea(){
             cout<<"The area of the rectangle is: "<<l*b<<endl;
    }
    void display(){
        cout<<"Shape:rectangle"<<endl;
    }
};
class triangle:public shape{
    private:
    float w,h;
    public:
    triangle(float w,float h){
        this->w=w;
        this->h=h;

    }
    void calculateArea(){
             cout<<"The area of the triangle is: "<<0.5*(w*h)<<endl;
    }
    void display(){
        cout<<"Shape:triangle"<<endl;
    }
};
int main(){
    shape *s;

    circle c(5);
    rectangle r(4,6);
    triangle t(3,7);

    s = &c;
    s->display();
    s->calculateArea();

    s = &r;
    s->display();
    s->calculateArea();

    s = &t;
    s->display();
    s->calculateArea();

    return 0;
}
