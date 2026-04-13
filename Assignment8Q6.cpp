#include<iostream>
using namespace std;
template<class T>
class Stack{
    private:
    T *arr;
    int size;
    int top;
    public:
    Stack(int s){
        size=s;
        arr=new T[size];
        top=-1;
    }
    void push(T x){
        if(top==size-1){
            cout<<"Stack overflow";
        }
        else{
            arr[++top]=x;
        }
    }
    T pop(){
        if(top==-1){
            cout<<"Stack underflow";
            return T();
        }
        else{
            return arr[top--];
        }
    }
    void display(){
        for (int i = top; i >=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    Stack<int> s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Popped: " << s.pop() << endl;

    s.display();

    return 0;
}