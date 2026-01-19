#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    char name[30];
    float cgpa;
    char degree[20];
    char hostel[20];
    public:
    void addDetails(){
        cout<<"Enter roll no:";
        cin>>rollno;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter CGPA:";
        cin>>cgpa;
        cout<<"Enter degree:";
        cin>>degree;
        cout<<"Enter hostel:";
        cin>>hostel;
        displayDetails();
    }
    void updateCGPA(){
        cout<<"Enter new CGPA:";
        cin>>cgpa;
    }
    void updateHostel(){
        cout<<"Enter new Hostel:";
        cin>>hostel;
    }
    void updateDetails(){
        updateCGPA();
        updateHostel();
        displayDetails();
    }
    void displayDetails(){
        cout<<"Roll no:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"CGPA:"<<cgpa<<endl;
        cout<<"Degree:"<<degree<<endl;
        cout<<"Hostel:"<<hostel<<endl;
    }
};
int main(){
    student s;
    s.addDetails();
    s.updateDetails();
    return 0;
}