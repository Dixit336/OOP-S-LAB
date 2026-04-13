#include<iostream>
using namespace std;
template<typename T>
void maximum(T arr[],int n){
    int x=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>x){
            x=arr[i];

        }
    }
    cout<<"Maximum number is:"<<x<<endl;
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
    maximum(arr,n);
    return 0;
    
}
