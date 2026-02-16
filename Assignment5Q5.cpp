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
    void setLength(int l){
         if(l>1){
            length=l;
         }
         else{
            length=1;
         }
    }
    void setBreadth(int b){
         if(b>1){
            breadth=b;
         }
         else{
            breadth=1;
         }
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
    ~rectangle(){
        cout<<"Rectangle destructor is called"<<endl;
    }
};
class cuboid:public rectangle{
    private:
    int height;
    public:
    cuboid(int l,int b,int h):rectangle(l,b){
        height=h;
    }
    ~cuboid(){
        cout << "Cuboid Destructor Called" << endl;
    }
    int volume(){
       return height*getLength()*getBreadth();
    }
};
int main(){
    cuboid c(10,20,5);
    cout<<"Volume is:"<<c.volume()<<endl;
    return 0;
}