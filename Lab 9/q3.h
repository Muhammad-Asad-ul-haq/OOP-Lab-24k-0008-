#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;

public:
    Book(string title, string author, string isbn);
    string getTitle() const;
    string getAuthor() const;
    string getISBN() const;
};

#endif
