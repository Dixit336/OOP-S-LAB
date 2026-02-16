#include<iostream>
using namespace std;
class Speedometer{
    public:
    void speed(){
        cout<<"The speed for the car is:"<<"80km/h"<<endl;
    }
};
class Fuelgauge{
    public:
    void fuel(){
        cout<<"The fuel level of the car is:"<<"70L"<<endl;
    }
};
class Thermometer{
    public:
    void temperature(){
        cout<<"The temperature of the car is:"<<"50 degree"<<endl;
    }
};
class CarDashboard:public Speedometer,public Fuelgauge,public Thermometer{
    public:
    void display(){
        speed();
        fuel();
        temperature();
    }
};
int main(){
    CarDashboard c;
    c.display();
    return 0;
}
