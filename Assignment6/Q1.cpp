#include<iostream>
#include<cstring>
using namespace std;
class Book{
    private:
    string title;
    string author;
    int isbn;
    public:
    void setData(string &title,string &author,int isbn){
        Book::title=title;
        Book::author=author;
        Book::isbn=isbn;
    }
    void display(){
        cout<<"Title: "<<endl;
        cout<<title;
        cout<<"Author: "<<author<<endl;
        cout<<"Isbn number: "<<isbn<<endl;
    }
    int getISBN(){
        return isbn;
    }
};
class Library{
    private:
    Book Books[100];
    int count=0;
    public:
    bool addNewBook(string &title,string &author,int &isbn){
           if(count>=100){
            return false;
           }
           else{
               Books[count].setData(title,author,isbn);
               count++;
               return true;
           }
    }
    bool removeBooks(int &isbn);
    void displayDetails(){
        for (int i = 0; i < count; i++)
        {
            Books[i].display();
        }
    }
};
bool Library::removeBooks(int &isbn){
    for (int i = 0; i < count; i++)
    {
        if (Books[i].getISBN()==isbn)
        {
            for (int j = i; j < count-1; j++)
            {
                Books[j]=Books[j+1];
            }
            count--;
            return true;
        }
    }
    return false;
}
int main(){
    Library lib;

    // Add 5 books
    for (int i = 0; i < 5; i++) {
        string title, author;
        int ISBN;

        cout << "\nEnter title: ";
        getline(cin,title);
        cout << "Enter author: ";
        getline(cin,author);
        cout << "Enter ISBN: ";
        cin>>ISBN;
        cin.ignore();

        lib.addNewBook(title, author, ISBN);
    }
    cout << "\n--- Library Books ---\n";
    lib.displayDetails();

    // Remove one book
    int remISBN;
    cout << "\nEnter ISBN to remove: ";
    cin >> remISBN;

    if (lib.removeBooks(remISBN))
        cout << "Book removed successfully\n";
    else
        cout << "Book not found\n";

    cout << "\n--- After Removal ---\n";
    lib.displayDetails();

    return 0;
}
