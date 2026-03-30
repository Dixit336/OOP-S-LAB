#include<iostream>
#include<string>
using namespace std;
class Book{
    private:
    string title;
    string author;
    int isbn;
    public:
    Book(){
        this->title="";
        this->author="";
        this->isbn=0;
    }
    Book(string title,string author,int isbn){
        this->author=author;
        this->title=title;
        this->isbn=isbn;
    }
    Book(const Book &b){
        this->author=b.author;
        this->title=b.title;
        this->isbn=b.isbn;
    }
    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"ISBN"<<isbn<<endl;
    }
    int Getisbn(){
        return isbn;
    }
};
class Library{
private:
Book *books;
int count;
int capacity;
public:
Library(int size = 100){
        this->capacity = size;
        this->count = 0;
        books = new Book[capacity];  
    }
    bool addNewBook(string &title, string &author, int &isbn){
        if(count>=capacity){
            return false;
        }
        else{
            books[count]=Book(title,author,isbn);
            count++;
            return true;
        }
    }
    bool removeBooks(int &isbn);
     void displayDetails() {
        for (int i = 0; i < count; i++) {
            books[i].display();
        }
    }
};

// Same logic
bool Library::removeBooks(int &isbn) {
    for (int i = 0; i < count; i++) {
        if (books[i].Getisbn() == isbn) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}
int main(){
    Library lib(100);   // dynamic size

    for (int i = 0; i < 5; i++) {
        string title, author;
        int ISBN;

        cout << "\nEnter title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter ISBN: ";
        cin >> ISBN;

        lib.addNewBook(title, author, ISBN);
    }

    cout << "\n--- Library Books ---\n";
    lib.displayDetails();

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
