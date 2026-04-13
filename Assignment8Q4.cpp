#include<iostream>
using namespace std;
template<typename T>

void BubbleSort(T arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                T temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    float arr[n];
     cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    cout<<"Array after sorting"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// // template<typename T>

// void BubbleSort(float arr[],int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if(arr[j]>arr[j+1]){
//                 float temp;
//                 temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
        
//     }
    
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n"<<endl;
//     cin>>n;
//     float arr[n];
//      cout<<"Enter the elements of the array"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     BubbleSort(arr,n);
//     cout<<"Array after sorting"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }