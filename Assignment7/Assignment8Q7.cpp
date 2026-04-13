#include<iostream>
using namespace std;
template<class T>
class Queue{
    private:
    T *arr;
    int front,rear;
    int size;
    public:
    Queue(int s){
        size=s;
        arr=new T[size];
        front=rear=-1;
    }
    void enqueue(T x){
        if(rear==size-1){
            cout<<"Queue overflow";
        }
        if(front==-1)front=0;
        arr[++rear]=x;
    }
    T dequeue(){
        if(front==-1){
            cout<<"Queue underflow";
            return T();
        }
        else{
            return arr[front++];
        }

    }
    void display(){
        for (int i = front; i <= rear; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};
int main(){
    Queue<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<"Dequeue: "<<q.dequeue()<<endl;
    q.display();
    return 0;
}