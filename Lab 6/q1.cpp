#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string  author;
    string  publisher;

    Book(string title, string author, string publisher) {
        this->title=title;
        this->author=author;
        this->publisher=publisher;
    }

    void display() {
        cout << "The Title of the Book is: " << title << "\nThe Author of the Book: " << author << "\nThe Publisher of the Book is: " << publisher << endl;
    }
};

class FictionBook : public Book {
public:
    string genre;
    string protagonist;

    FictionBook(string title, string author, string publisher, string genre, string protagonist)
        : Book(title, author, publisher), genre(genre), protagonist(protagonist) {}

    void display() {
        Book::display();
        cout << "The Genre is: " << genre << "\nThe Protagonist is: " << protagonist << endl;
    }
};

int main() {
    
    FictionBook book("Harry Potter", "J.K.Rowling", "Bloomsbury Publishing", "Mystery", "Harry Potter");
    
    book.display();
    
return 0;
}
