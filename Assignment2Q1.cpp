
#include<iostream>
using namespace std;
struct Student{
    int rollno;
    char name[30];
    float cgpa;
    char degree[20];
    char hostel[20];
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
        cout<<"Roll No:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"CGPA:"<<cgpa<<endl;
        cout<<"Hostel:"<<hostel<<endl;

    }
}s1;
int main(){
s1.addDetails();
s1.updateDetails();
return 0;
}