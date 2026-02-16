#include<iostream>
using namespace std;
class Book{
    string title;
    string author;
    float price;
    public:
    Book(string t,string n,float p){
        title=t;
        author=n;
        price=p;
    }
    void create(){
        cout<<"Enter the title:"<<endl;
        cin>>title;
        cout<<"Enter the Author name:"<<endl;
        cin>>author;
        cout<<"Enter the price:"<<endl;
        cin>>price;
    }
    void display(){
        cout<<"Title:"<<title<<endl;
        cout<<"Name:"<<author<<endl;
        cout<<"Price:"<<price<<endl;
    }
    
};
class TextBook:public Book{
private:
string subject;
public:
 TextBook(string t,string n,float p,string s):Book(t,n,p){
    subject=s;
}
void subj(){
    cout<<"Enter the subject name"<<endl;
    cin>>subject;
}
void displayTextBook(){
    display();
    cout<<"The subject is:"<<subject<<endl;
}
};
int main(){
  TextBook tb("GOD","Chetan",102.3,"Vishnu");
  tb.displayTextBook();
  return 0;
}
