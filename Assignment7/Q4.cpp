#include<iostream>
using namespace std;
class student{
    public:
    virtual void show()=0;
};
class engineering:public student{
    public:
   void show(){
    cout<<"Student belongs to Engineering"<<endl;
   }
};
class medicine:public student{
    public:
   void show(){
    cout<<"Student belongs to medicine"<<endl;
   }
};
class science:public student{
    public:
   void show(){
    cout<<"Student belongs to science"<<endl;
   }
};
int main(){
    student* s[3];  

    engineering e;
    medicine m;
    science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for(int i = 0; i < 3; i++){
        s[i]->show();   
    }
    return 0;
    
}
