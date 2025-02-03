#include <iostream>
#include <string>
using namespace std;

struct book {
    string title;
    string author;
    int year;
    string genre;
};

book books[10];
int bookcount = 0;

void display(book books[]) {
    for (int i = 0; i < bookcount; ++i) {
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Year: " << books[i].year << endl;
        cout << "Genre: " << books[i].genre << endl;
        cout << "-----------------------------" << endl;
    }
}

void searchbytitle(book books[]) {
    int i;
    string t;
    cout << "Enter title: ";
    cin >> t;
    for (i = 0; i < bookcount; ++i) {
        if (books[i].title == t) {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Year: " << books[i].year << endl;
            cout << "Genre: " << books[i].genre << endl;
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void searchbyauthor(book books[]) {
    int i;
    string a;
    cout << "Enter author: ";
    cin >> a;
    for (i = 0; i < bookcount; ++i) {
        if (books[i].author == a) {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Year: " << books[i].year << endl;
            cout << "Genre: " << books[i].genre << endl;
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void newbook(book books[]) {
    cout << "Enter info of new book" << endl;

    cout << "Enter title: ";
    cin >> books[bookcount].title;

    cout << "Enter author: ";
    cin >> books[bookcount].author;

    cout << "Enter year: ";
    cin >> books[bookcount].year;

    cout << "Enter genre: ";
    cin >> books[bookcount].genre;

    bookcount++;
}

void edit(book books[]) {
    int choice, index;
    cout << "Enter index of book to edit (0 to " << bookcount - 1 << "): ";
    cin >> index;

    if (index < 0 || index >= bookcount) {
        cout << "Invalid index!" << endl;
        return;
    }

    cout << "Enter 1 to change title\n";
    cout << "Enter 2 to change author\n";
    cout << "Enter 3 to change year\n";
    cout << "Enter 4 to change genre\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter new title: ";
            cin >> books[index].title;
            break;
        case 2:
            cout << "Enter new author: ";
            cin >> books[index].author;
            break;
        case 3:
            cout << "Enter new year: ";
            cin >> books[index].year;
            break;
        case 4:
            cout << "Enter new genre: ";
            cin >> books[index].genre;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "Enter 1 for New book\n";
        cout << "Enter 2 for Edit book\n";
        cout << "Enter 3 for Search book by author\n";
        cout << "Enter 4 for Search book by title\n";
        cout << "Enter 5 for Display all books\n";
        cout << "Enter 6 to Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                newbook(books);
                break;
            case 2:
                edit(books);
                break;
            case 3:
                searchbyauthor(books);
                break;
            case 4:
                searchbytitle(books);
                break;
            case 5:
                display(books);
                break;
            case 6:
                cout<< "Thankyou for using this Program!";
                return 0;
            default:
                cout << "Invalid choice, please try again!" << endl;
        }
    }
}
