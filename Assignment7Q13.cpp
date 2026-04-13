#include<iostream>
#include<cmath>
using namespace std;
class Cartesian;
class Polar{
    private:
    float r,theta;
    public:
    Polar(float r,float t){
        this->r=r;
        this->theta=t;
    }
    operator Cartesian();
};
class Cartesian{
    private:
    float x,y;
    public:
    Cartesian(float x,float y){
        this->x=x;
        this->y=y;
    }
    void show(){
        cout<<"x= "<<x<<", y="<<y<<endl;
    }
};
Polar::operator Cartesian(){
    float x=r*cos(theta);
    float y=r*sin(theta);
    return Cartesian(x,y);
}
int main(){
    Polar p(10,5);
    Cartesian c=p;
    c.show();
    return 0;
}