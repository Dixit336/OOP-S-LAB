#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    string address;

public:
    Person(string n, string a) : name(n), address(a) {}

    void displayPerson(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

class Staff : virtual public Person{
protected:
    int employeeID;
    string department;

public:
    Staff(string n,string a,int id,string dept)
        : Person(n,a), employeeID(id), department(dept) {}

    void displayStaff(){
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

class Student : virtual public Person{
protected:
    int studentID;
    string grade;

public:
    Student(string n,string a,int sid,string g)
        : Person(n,a), studentID(sid), grade(g) {}

    void displayStudent(){
        cout<<"Student ID: "<<studentID<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

class TeachingAssistant : public Staff, public Student{
public:
    TeachingAssistant(string n,string a,
                      int eid,string dept,
                      int sid,string g)
        : Person(n,a),
          Staff(n,a,eid,dept),
          Student(n,a,sid,g) {}

    void displayTA(){
        displayPerson();
        displayStaff();
        displayStudent();
    }
};

int main(){
    TeachingAssistant ta("Rahul","Delhi",101,"CSE",202,"A");
    ta.displayTA();

    return 0;
}
