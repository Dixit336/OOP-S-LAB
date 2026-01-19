#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    float marks;
    char name[30];
    static int rollCounter;
    public:
    void displayDetails();
    void addDetails(){
        cout<<"Enter roll no:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter marks:";
        cin>>marks;
        rollCounter++;
        cout<<"Total number of students:"<<rollCounter<<endl;
        displayDetails();
    }

};
void Student::displayDetails(){
    cout<<"Roll no:"<<rollno<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"marks:"<<marks<<endl;
}
int Student::rollCounter=0;

int main(){
    Student s;
    s.addDetails();
    s.displayDetails();
    
    return 0;
}