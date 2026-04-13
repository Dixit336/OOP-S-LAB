#include<iostream>
using namespace std;
class Time{
    private:
    int h;
    int m;
    int s;
    public:
    Time(){
        h = 0;
        m = 0;
        s = 0;
    }
    Time(int h,int m,int s){
        this->h=h;
        this->m=m;
        this->s=s;
    }
    Time operator+(Time t){
        Time temp;
        temp.s=s+t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;
        return temp;
    }
    void show(){
        cout << "Time: " << h << " hrs " << m << " min " << s << " sec" << endl;
    }
};

int main(){
    Time t1(5,15,34);
    Time t2(9,53,58),t3;
    t3=t1+t2;
    t3.show();
    return 0;
}