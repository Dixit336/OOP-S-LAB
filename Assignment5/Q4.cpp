#include<iostream>
using namespace std;
//Singl eInheritance
class SingleInheri{
private:
int a=10;
public:
int x=20;
void show(){
cout<<"Value of x and a is:"<<x<<" "<<a<<endl;
}
};
class inherited: public SingleInheri{
    private:
    int b=10;
    public:
    void show2(){
        cout<<"Value of b and x is:"<<b<<" "<<x<<endl;
    }
};
//Multiple Inheritance
class A{
private:
int b=20;
public:
int y=90;
void showMP(){
    cout<<"Value of y and b is:"<<b<<" "<<y<<endl;
}
};
class B{
    public:
    int c=30;
    void ShowB(){
        cout<<"Value of c is:"<<c<<endl;
    }
};
class C:public A,public B{
public:
void showC(){
    cout<<"Value of y and c is:"<<y<<" "<<c<<endl;
}
};

//Hierarchial Inheritance
class HA{
    public:
    int l=20;
    void showHA(){
        cout<<"Value of l is:"<<l<<endl;
    }
};
class HB:public HA{
    public:
    void showHB(){
        cout<<"Value of l is:"<<l<<endl;
    }
};
class HC:public HA{
    public:
    void showHC(){
        cout<<"Value of l is:"<<l<<endl;
    }
};

//Multilevel Inheritance
class MA{
    public:
    int t=20;
    void showHA(){
        cout<<"Value of t is:"<<t<<endl;
    }
};
class MB:public MA{
    public:
    void showHB(){
        cout<<"Value of t is:"<<t<<endl;
    }
};
class MC:public MB{
    public:
    void showHC(){
        cout<<"Value of t is:"<<t<<endl;
    }
};


//Hybrid Inheritance
class HYA{
    public:
    int l=20;
    void showHA(){
        cout<<"Value of l is:"<<l<<endl;
    }
};
class HYB:virtual public HYA{
    public:
    int hb=10;
    void showHB(){
        cout<<"Value of l is:"<<l<<endl;
    }
};
class HYC:virtual public HYA{
    public:
    int hc=20;
    void showHC(){
        cout<<"Value of l is:"<<l<<endl;
    }
};
class HYD:public HYB,public HYC{
    public:
    void showHC(){
        cout<<"Value of hc and  hb is:"<<hc<<" "<<hb<<endl;
    }
};
int main(){

    cout << "----- Single Inheritance -----" << endl;
    inherited obj1;
    obj1.show();     // From SingleInheri
    obj1.show2();    // From inherited

    cout << "\n----- Multiple Inheritance -----" << endl;
    C obj2;
    obj2.showMP();   // From A
    obj2.ShowB();    // From B
    obj2.showC();    // From C

    cout << "\n----- Hierarchical Inheritance -----" << endl;
    HB obj3;
    HC obj4;
    obj3.showHA();
    obj3.showHB();
    obj4.showHA();
    obj4.showHC();

    cout << "\n----- Multilevel Inheritance -----" << endl;
    MC obj5;
    obj5.showHA();   // From MA
    obj5.showHB();   // From MB
    obj5.showHC();   // From MC

    cout << "\n----- Hybrid Inheritance -----" << endl;
    HYD obj6;
    obj6.showHA();   // From HYA (shared virtual)
    obj6.showHB();   // From HYB
    obj6.showHC();   // From HYD (overridden one)

    return 0;
}
