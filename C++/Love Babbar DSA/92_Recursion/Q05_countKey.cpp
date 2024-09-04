#include <iostream>
using namespace std;


void countKey(string& str, char& key, int i, int& count) {

    if(i >= str.length()) {
        return;
    }

    if(str[i] == key) {
        count++;
    }
    countKey(str, key, i + 1, count);

}

void countKey(string str, char key, int& count) {

    if(str.length() == 0) {
        return;
    }

    if(str[str.length() - 1] == key) {
        count++;
    }
    str.pop_back();

    countKey(str, key, count);

}


int main() {

    string str = "Jaspreet Singh";
    char key = 'z';
    int count = 0;
    int i = 0;

    // countKey(str, key, count);
    countKey(str, key, i, count);

    if(count == 0) {
        cout << "Key not found" << endl;
    }
    else {
        cout << "Number of keys found: " << count << endl;
    }
    
}