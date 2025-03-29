#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string st = "thiruvananthapuram";
    unordered_map<char, int> freq;

    for(int i = 0; i < st.length(); i++) {
        char ch = st[i];
        freq[ch]++;
    }

    for(auto i: freq) {
        cout << i.first << " -> " << i.second << endl;
    }

}