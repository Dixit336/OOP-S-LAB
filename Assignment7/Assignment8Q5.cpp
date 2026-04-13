#include<iostream>
using namespace std;
template<typename T>
int linearSearch(T arr[],int n,T target){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==target){
            return 1;
        }
    
    }
    return -1;
}
int main(){
    int n,target;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the target value"<<endl;
    cin>>target;
    int arr[n];
     cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    if(linearSearch(arr,n,target)==1){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found in the array"<<endl;
    }
    return 0;
}