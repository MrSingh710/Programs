#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Product {
public:
    int identifier;
    string name;
    double price;

    Product(int id, const string &n, double p) : identifier(id), name(n), price(p) {}
};

class HashTable {
private:
    vector<Product*> table;
    vector<bool> deleted;
    int size;

    int h1(int key) {
        return key % size;
    }

    int h2(int key) {
        return 1 + (key % (size - 1));
    }

    int hash(int key, int i) {
        return (h1(key) + i * h2(key)) % size;
    }

public:
    HashTable(int s) : size(s), table(s, nullptr), deleted(s, false) {}

    bool add(Product* product) {
        int key = product->identifier;
        for (int i = 0; i < size; i++) {
            int index = hash(key, i);
            if (table[index] == nullptr || deleted[index]) {
                table[index] = product;
                deleted[index] = false;
                return true;
            }
        }
        return false; 
    }

    bool remove(int identifier) {
        int key = identifier;
        for (int i = 0; i < size; i++) {
            int index = hash(key, i);
            if (table[index] == nullptr) {
                return false; 
            }
            if (table[index]->identifier == key) {
                table[index] = nullptr;
                deleted[index] = true;
                return true;
            }
        }
        return false; 
    }

    Product* search(int identifier) {
        int key = identifier;
        for (int i = 0; i < size; i++) {
            int index = hash(key, i);
            if (table[index] == nullptr) {
                return nullptr; 
            }
            if (table[index]->identifier == key) {
                return table[index];
            }
        }
        return nullptr; 
    }
};

class ShoppingCart {
private:
    HashTable hashTable;

public:
    ShoppingCart(int size = 11) : hashTable(size) {}

    void addProduct(Product* product) {
        if (hashTable.add(product)) {
            cout << "Product " << product->name << " added to the cart.\n";
        } else {
            cout << "Failed to add product: Cart is full.\n";
        }
    }

    void removeProduct(int identifier) {
        if (hashTable.remove(identifier)) {
            cout << "Product with ID " << identifier << " removed from the cart.\n";
        } else {
            cout << "Failed to remove product: Product with ID " << identifier << " not found.\n";
        }
    }

    void searchProduct(int identifier) {
        Product* product = hashTable.search(identifier);
        if (product) {
            cout << "Product found: " << product->name << ", Price: " << product->price << "\n";
        } else {
            cout << "Product with ID " << identifier << " not found in the cart.\n";
        }
    }
};

int main() {
    
    Product* product1 = new Product(1, "Laptop", 999.99);
    Product* product2 = new Product(2, "Smartphone", 499.99);
    Product* product3 = new Product(3, "Tablet", 299.99);

    ShoppingCart cart;
    cart.addProduct(product1);
    cart.addProduct(product2);
    cart.addProduct(product3);

    cart.searchProduct(2);
    cart.removeProduct(2);
    cart.searchProduct(2);

    delete product1;
    delete product2;
    delete product3;

    return 0;
}
