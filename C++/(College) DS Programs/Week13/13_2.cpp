#include <iostream>
#include <string>
#include <list>

using namespace std;

class Book {
public:
    string title;
    string author;
    int yearPublished;
    string ISBN; 

    Book(string t, string a, int y, string i) {
        title = t;
        author = a;
        yearPublished = y;
        ISBN = i;
    }
};

class HashTable {
private:
    static const int TABLE_SIZE = 1000; 
    list<Book>* table;

public:
    HashTable() {
        table = new list<Book>[TABLE_SIZE];
    }

    ~HashTable() {
        delete[] table;
    }

    int hashFunction(string ISBN) {
        int sum = 0;
        for (char c : ISBN) {
            sum += c;
        }
        return sum % TABLE_SIZE;
    }

    void insertBook(Book book) {
        int index = hashFunction(book.ISBN);
        table[index].push_back(book);
    }

    Book* searchBook(string ISBN) {
        int index = hashFunction(ISBN);
        for (Book& book : table[index]) {
            if (book.ISBN == ISBN) {
                return &book;
            }
        }
        return nullptr; 
    }

    void deleteBook(string ISBN) {
        int index = hashFunction(ISBN);
        for (auto it = table[index].begin(); it != table[index].end(); ++it) {
            if (it->ISBN == ISBN) {
                table[index].erase(it);
                return;
            }
        }
    }
};

class Library {
private:
    HashTable bookTable;

public:
    void addBook(Book book) {
        bookTable.insertBook(book);
    }

    Book* searchBookByISBN(string ISBN) {
        return bookTable.searchBook(ISBN);
    }

    void deleteBookByISBN(string ISBN) {
        bookTable.deleteBook(ISBN);
    }
};

int main() {
    Library library;

    Book book1("To Kill a Mockingbird", "Harper Lee", 1960, "9780061120084");
    Book book2("The Great Gatsby", "F. Scott Fitzgerald", 1925, "9780743273565");
    Book book3("Pride and Prejudice", "Jane Austen", 1813, "9780486280511");

    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    Book* foundBook = library.searchBookByISBN("9780743273565");
    if (foundBook != nullptr) {
        cout << "Found book: " << foundBook->title << " by " << foundBook->author << endl;
    } else {
        cout << "Book not found." << endl;
    }

    library.deleteBookByISBN("9780061120084");

    return 0;
}