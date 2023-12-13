#include <iostream>
#include <stdexcept>

using namespace std;

class ShoppingCart {
private:
    string items[100];  
    int itemCount;

public:
    ShoppingCart() : itemCount(0) {}

    void addItem(string itemId) {
        if (itemCount >= 100) {
            throw overflow_error("Shopping cart is full.");
        }
        items[itemCount++] = itemId;
    }

    void removeItem(string itemId) {
        int index = -1;
        for (int i = 0; i < itemCount; ++i) {
            if (items[i] == itemId) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            throw invalid_argument("Item not found in the cart.");
        }
        for (int i = index; i < itemCount - 1; ++i) {
            items[i] = items[i + 1];
        }
        --itemCount;
    }

    void purchaseItems() {

        cout << "Items purchased successfully." << endl;
    }
};

int main() {
    try {
        ShoppingCart cart;
        cart.addItem("123");
        cart.addItem("456");
        cart.removeItem("789");
        cart.purchaseItems();
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}