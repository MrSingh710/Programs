#include <iostream>
#include <string>

using namespace std;

class Contact {
public:
    int id;
    string name;
    long int tel;

    Contact() {
        id = 0;
        tel = 0;
    }
};

class HashTable {
private:
    Contact* data;
    int size;

public:
    HashTable(int size) {
        this->size = size;
        data = new Contact[size];
    }

    ~HashTable() {
        delete[] data;
    }

    int hash(int key) {
        return (key % size);
    }

    void addContact(int id, string name, long int tel) {
        int index = hash(id);
        for (int i = 0; i < size; i++) {
            if (data[(index + i) % size].id == 0) {
                data[(index + i) % size].id = id;
                data[(index + i) % size].name = name;
                data[(index + i) % size].tel = tel;
                break;
            }
        }
    }

    void searchContact(int id) {
        int index = hash(id);
        for (int i = 0; i < size; i++) {
            if (data[(index + i) % size].id == id) {
                cout << "Record found:" << endl;
                cout << "ID: " << data[(index + i) % size].id << endl;
                cout << "Name: " << data[(index + i) % size].name << endl;
                cout << "Telephone: " << data[(index + i) % size].tel << endl;
                return;
            }
        }
        cout << "Record not found" << endl;
    }

    void deleteContact(int id) {
        int index = hash(id);
        for (int i = 0; i < size; i++) {
            if (data[(index + i) % size].id == id) {
                data[(index + i) % size].id = 0;
                data[(index + i) % size].name = "";
                data[(index + i) % size].tel = 0;
                cout << "Record deleted successfully" << endl;
                return;
            }
        }
        cout << "Record not found" << endl;
    }

    void displayContacts() {
        for (int i = 0; i < size; i++) {
            if (data[i].id!= 0) {
                cout << "ID: " << data[i].id << endl;
                cout << "Name: " << data[i].name << endl;
                cout << "Telephone: " << data[i].tel << endl;
            }
        }
    }
};

int main() {
    HashTable phoneBook(20);

    phoneBook.addContact(1, "ABC", 1133557799);
    phoneBook.addContact(2, "XYZ", 987654321);
    phoneBook.addContact(3, "RST", 224466889);

    phoneBook.displayContacts();
    phoneBook.searchContact(2);
    phoneBook.deleteContact(1);
    phoneBook.displayContacts();

    return 0;
}