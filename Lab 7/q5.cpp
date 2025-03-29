#include <iostream>
#include <string>
using namespace std;

class MediaItem {
protected:
    string title, pubDate, id, publisher;

public:
    MediaItem(string t, string pDate, string i, string pub)
        : title(t), pubDate(pDate), id(i), publisher(pub) {}

    virtual void displayDetails() const {
        cout << "\nTitle: " << title << "\nPublication Date: " << pubDate
             << "\nID: " << id << "\nPublisher: " << publisher << endl;
    }

    void checkOutItem() const {
        cout << title << " has been checked out." << endl;
    }

    void returnItem() const {
        cout << title << " has been returned." << endl;
    }
};

class Book : public MediaItem {
private:
    string author, isbn;
    int pages;

public:
    Book(string t, string pDate, string i, string pub, string auth, string isb, int p)
        : MediaItem(t, pDate, i, pub), author(auth), isbn(isb), pages(p) {}

    void displayDetails() const override {
        MediaItem::displayDetails();
        cout << "Author: " << author << "\nISBN: " << isbn << "\nPages: " << pages << endl;
    }
};

class DVD : public MediaItem {
private:
    string director;
    double duration;
    float rating;

public:
    DVD(string t, string pDate, string i, string pub, string dir, double dur, float rate)
        : MediaItem(t, pDate, i, pub), director(dir), duration(dur), rating(rate) {}

    void displayDetails() const override {
        MediaItem::displayDetails();
        cout << "Director: " << director << "\nDuration: " << duration << " hours\nRating: " << rating << " / 10" << endl;
    }
};

class CD : public MediaItem {
private:
    string artist, genre;
    int tracks;

public:
    CD(string t, string pDate, string i, string pub, string art, int tks, string gen)
        : MediaItem(t, pDate, i, pub), artist(art), tracks(tks), genre(gen) {}

    void displayDetails() const override {
        MediaItem::displayDetails();
        cout << "Artist: " << artist << "\nTracks: " << tracks << "\nGenre: " << genre << endl;
    }
};

int main() {
    Book book1("Harry Potter", "1991", "B290", "Pearson", "J.K.Rowlings", "312-31231231", 750);
    DVD dvd1("Manifest", "2020", "D312", "Pixel.", "Tony Kakkar", 3.2, 9.4);
    CD cd1("Cars", "2012", "C313", "Epic Games", "Leroy Sane", 9, "Anime");

    cout << "\n Media Information \n";
    book1.displayDetails();
    dvd1.displayDetails();
    cd1.displayDetails();

    cout << "\nChecking out items\n";
    book1.checkOutItem();
    dvd1.checkOutItem();
    cd1.checkOutItem();

    cout << "\nReturning items\n";
    book1.returnItem();
    dvd1.returnItem();
    cd1.returnItem();

    return 0;
}
