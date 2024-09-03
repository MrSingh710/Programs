#include <iostream>
using namespace std;

bool findKey(string str, string key) {

    if(str.length() == 0) {
        return false;
    }

    findKey(str.length() - 1, key);

    if(str[str.length() - 1] == key) {
        return true;
    }
    else {
        return;
    }

    return false;

}


int main() {

    string str = "Jaspreet Singh";
    string key = "k";

    if(findKey(str, key) == false) {
        cout << "Key not found" << endl;
    }
    else {
        cout << "Key found" << endl;
    }
}