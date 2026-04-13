#include<iostream>
using namespace std;
class Array{
    int arr[5];
    public:
    int& operator[](int i){
        if(i<0 || i>=5){
            cout<<"Index out of bounds";
            exit(0);
        }
        return arr[i];
    }
};
int main(){
    Array a;
    a[0]=10;
    a[1]=20;
    a[6]=30;
    cout<<a[0]<<" "<<a[1];
    return 0;
}