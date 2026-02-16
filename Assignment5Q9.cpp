#include<iostream>
using namespace std;

class Vehicle{
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string mk, string md, int yr)
        : make(mk), model(md), year(yr) {}

    void displayVehicle(){
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};

class Truck : public Vehicle{
protected:
    int loadCapacity;

public:
    Truck(string mk, string md, int yr, int lc)
        : Vehicle(mk,md,yr), loadCapacity(lc) {}

    void displayTruck(){
        displayVehicle();
        cout<<"Load Capacity: "<<loadCapacity<<" tons"<<endl;
    }
};

class RefrigeratedTruck : public Truck{
private:
    int temperatureControl;

public:
    RefrigeratedTruck(string mk, string md, int yr, int lc, int temp)
        : Truck(mk,md,yr,lc), temperatureControl(temp) {}

    void displayRefrigeratedTruck(){
        displayTruck();
        cout<<"Temperature Control: "<<temperatureControl<<" C"<<endl;
    }
};

int main(){
    RefrigeratedTruck r("Tata","Ultra",2022,10,-5);
    r.displayRefrigeratedTruck();
}