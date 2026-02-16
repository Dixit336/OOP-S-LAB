#include<iostream>
using namespace std;
class LibraryUser{
    string name;
    int id;
    int contact;
    public:
    LibraryUser(string n,int i,int c){
        name=n;
        id=i;
        contact=c;
    }
    void create(){
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the id:"<<endl;
        cin>>id;
        cout<<"Enter the contact details:"<<endl;
        cin>>contact;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Contact:"<<contact<<endl;
    }
    
};
class Student:public LibraryUser{
private:
string branch;
public:
 Student(string n,int i,int c,string b):LibraryUser(n,i,c){
    branch=b;
}
void bran(){
    cout<<"Enter the branch of the student"<<endl;
    cin>>branch;
}
void displayStudent(){
    display();
    cout<<"The branch is:"<<branch<<endl;
}
};
class Teacher:public LibraryUser{
private:
string department;
public:
 Teacher(string n,int i,int c,string d):LibraryUser(n,i,c){
    department=d;
}
void depart(){
    cout<<"Enter the department of the teacher"<<endl;
    cin>>department;
}
void displayTeacher(){
    display();
    cout<<"The department is:"<<department<<endl;
}
};
int main(){
  Student s("Dixit",1,12345,"ENC");
  Teacher t("Dimple",2,67382,"CSE");
  s.displayStudent();
  t.displayTeacher();
  return 0;
}
