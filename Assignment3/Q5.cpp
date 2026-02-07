#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    void input(){
        cin>>length>>breadth;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
   int n;
   cout<<"Enter the no of rectangles:"<<endl;
   cin>>n;
   rectangle r[n];
   for (int i = 0; i < n; i++)
   {
    r[i].input();
   }
for (int i = 0; i < n; i++)
   {
    cout << "Area of rectangle " << i+1 << " = " <<r[i].area()<<endl;
   }
   
   return 0;
}
