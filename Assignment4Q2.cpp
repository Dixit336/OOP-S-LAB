#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    rectangle(int x){
        length=x;
        breadth=x;
    }
    int area(){
        return length*breadth;
    }
    ~rectangle(){
       cout<<"Destructor is called"<<endl;
    }
};
int main(){
    rectangle r[3]={rectangle(),rectangle(10,5),rectangle(4)};
    cout<<"Area is:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<r[i].area()<<endl;
    }
    return 0;

}
