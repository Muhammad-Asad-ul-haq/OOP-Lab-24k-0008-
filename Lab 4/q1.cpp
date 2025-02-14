#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string name;
    string author;
    float price;

public:
    
    Book() {
        name = "Untitled";
        author = "Anonymous";
        price = 0.0;

        cout << "Book name is: " << name << endl;
        cout << "Author name is: " << author << endl;
        cout << "Price is: " << price << " Rs" << endl;
    }

   
    Book(string name, string author, float price) {
       this->name = name;
    	this->author = author;
    	this->price = price;

        cout << "Book name is: " << name << endl;
        cout << "Author name is: " << author << endl;
        cout << "Price is: " << price << " Rs" << endl;
    }

  
    Book(string name) {
         this->name = name;
         this->author = "Anonymous";
         this->price = 0.0;

        cout << "Book name is: " << name << endl;
        cout << "Author name is: " << author << endl;
        cout << "Price is: " << price << " Rs" << endl;
    }

    
    Book(Book& b) {
         this->name = b.name;
         this->author = b.author;
         this->price = b.price;

        cout << "Book name is: " << name << endl;
        cout << "Author name is: " << author << endl;
        cout << "Price is: " << price << " Rs" << endl;
    }
};

int main() {
    Book b1;  
    Book b2("Harry Potter", "J.K. Rowling", 7500.90);  
    Book b3("Gran Turismo");  

    Book b4(b2);  

    return 0;
}
