#include<iostream>
using namespace std;
class Test{
    private:
    float x;
    public:
    Test(float a){x=a;}
    operator float(){
        return x;
    }
};
int main(){
    Test t(7.5);
    float f=t;
    cout<<f;
    return 0;
}
