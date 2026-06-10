#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string author;
    string title;
    string publisher;
    int year;
    int pages;

public:
    // Constructor
    Book(string a, string t, string p, int y, int pg) {
        author = a;
        title = t;
        publisher = p;
        year = y;
        pages = pg;
    }

    // Getters
    string getAuthor() { return author; }
    string getPublisher() { return publisher; }
    int getYear() { return year; }

    // Display book info
    void display() {
        cout << author << " — \"" << title << "\", "
             << publisher << ", " << year << ", "
             << pages << " pages" << endl;
    }
};

int main() {
    const int SIZE = 5;
    Book books[SIZE] = {
        Book("Ivanenko I.", "Programming Basics", "Education", 2018, 320),
        Book("Petrenko O.", "Algorithms and Data Structures", "Science", 2020, 280),
        Book("Ivanenko I.", "C++ for Beginners", "Education", 2022, 410),
        Book("Sydorenko L.", "Databases", "Tech", 2019, 350),
        Book("Petrenko O.", "Object-Oriented Programming", "Science", 2023, 290)
    };

    string author, publisher;
    int year;

    cout << "Enter author: ";
    getline(cin, author);
    cout << "\nBooks by " << author << ":\n";
    for (int i = 0; i < SIZE; i++)
        if (books[i].getAuthor() == author)
            books[i].display();

    cout << "\nEnter publisher: ";
    getline(cin, publisher);
    cout << "\nBooks published by " << publisher << ":\n";
    for (int i = 0; i < SIZE; i++)
        if (books[i].getPublisher() == publisher)
            books[i].display();

    cout << "\nEnter year: ";
    cin >> year;
    cout << "\nBooks published after " << year << ":\n";
    for (int i = 0; i < SIZE; i++)
        if (books[i].getYear() > year)
            books[i].display();

    return 0;
}
