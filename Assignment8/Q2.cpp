#include<iostream>
using namespace std;
template<typename T>

void minimum(T arr[],int n){
    int x=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<x){
            x=arr[i];

        }
    }
    cout<<"Minimum number is:"<<x<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int arr[n];
     cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    minimum(arr,n);
    return 0;
    
}
