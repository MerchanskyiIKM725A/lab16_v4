#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Book {
    string author;
    string title;
    string publisher;
    int year;
    int pages;
};


void printBook(const Book& b) {
    cout << b.author << " — \"" << b.title << "\", "
        << b.publisher << ", " << b.year << ", "
        << b.pages << " page." << endl;
}

int main() {
    vector<Book> books = {
        {"Ivanenko I.", "Basics of Programming", "Education", 2018, 320},
        {"Petrenko O.", "Algorithms and Data Structures", "Science", 2020, 280},
        {"Ivanenko I.", "C++ for Beginners", "Education", 2022, 410},
        {"Sydorenko L.", "Databases", "Technology", 2019, 350},
        {"Petrenko O.", "Object-oriented programming", "Science", 2023, 290}
    };

    string author, publisher;
    int year;

    cout << "Enter author: ";
    getline(cin, author);
    cout << "\nAuthor's books " << author << ":\n";
    for (auto& b : books)
        if (b.author == author) printBook(b);

    cout << "\nEnter the publisher: ";
    getline(cin, publisher);
    cout << "\nBooks of the publishing house " << publisher << ":\n";
    for (auto& b : books)
        if (b.publisher == publisher) printBook(b);

    cout << "\nEnter the year: ";
    cin >> year;
    cout << "\nBooks published after " << year << " year:\n";
    for (auto& b : books)
        if (b.year > year) printBook(b);

    return 0;
}
