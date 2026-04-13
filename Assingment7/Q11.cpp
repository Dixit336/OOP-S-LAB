#include<iostream>
using namespace std;
class Test{
    private:
    int x;
    public:
    Test(float f){
        x=f;
    }
    void display(){
        cout<<x;
    }
};
int main(){
    float f=5.5;
    Test t=f;
    t.display();
    return 0;
}
