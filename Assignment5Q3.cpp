#include<iostream>
using namespace std;

class Base{
public:
    int x = 10;
};

class PrivateDerived : private Base{
public:
    void show(){
        cout << x << endl;   
    }
};

class PrivateChild : public PrivateDerived{
public:
    void test(){
        // cout << x; //It will show error
    }
};

class ProtectedDerived : protected Base{
public:
    void show(){
        cout << x << endl;   
    }
};

class ProtectedChild : public ProtectedDerived{
public:
    void test(){
        cout << x << endl;   
    }
};

int main(){
    PrivateDerived p;
    p.show();

    ProtectedChild q;
    q.test();

    return 0;
}