#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    float marks;
    char name[30];
    void displayDetails(){
        cout<<"Roll No:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"marks:"<<marks<<endl;
    }
    public:
    void addDetails(){
        cout<<"Enter roll no:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter marks:";
        cin>>marks;
        displayDetails();
    }
    void updateMarks(){
        cout<<"Enter new marks:";
        cin>>marks;
        displayDetails();
    }
};
int main(){
    Student s;
    s.addDetails();
    s.updateMarks();
    return 0;
}
