#include<iostream>
#include<cmath>
using namespace std;
class triangle{
    public:
    void area(int b,int h){
        cout<<"Area of right angle triangle is: "<<0.5*(b*h)<<endl;
    }
    void area(int s){
        cout<<"Area of equilateral triangle is: "<<(sqrt(3)/4)*s*s<<endl;
    }
    void area(int s,int b,int dummy){
        cout<<"Area of isosceles triangle: "<<(b/4.0) * sqrt(4*s*s - b*b)<<endl;
    }
};
int main(){
    triangle t;
    t.area(5,10);      // Right angle
    t.area(6);         // Equilateral
    t.area(5,6,0);     // Isosceles

    return 0;
}