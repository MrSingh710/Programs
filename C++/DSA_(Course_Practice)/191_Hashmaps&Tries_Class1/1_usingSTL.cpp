#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Creation
    // unordered_map<key, value>
    unordered_map<string, int> m;

    // Insertion 1
    pair<string, int> p = make_pair("Scorpio", 9);
    m.insert(p);

    // Insertion 2
    pair<string, int> p2("Alto", 2);
    m.insert(p2);

    // Insertion 3
    m["Fortuner"] = 10;


    // Different ways to access
    cout << m.at("Alto") << endl;
    cout << m["Scorpio"] << endl;
    cout << m["Fortuner"] << endl;


    // Search (Count function) (Gives bool answer)
    cout << "Is Fortuner present? -> " << m.count("Fortuner") << endl;
    cout << "Is Inova present? -> " << m.count("Inova") << endl;

    // Search (Find function) (Searches the whole map)
    if(m.find("Fortuner") != m.end()) {
        cout << "Fortuner found" << endl;
    }
    else {
        cout << "Fortuner not found" << endl;
    }


    // Size
    cout << "Size of map before accessing a pair which is not available: " << m.size() << endl;
    cout << "Is Hummer present? -> " << m.count("Hummer") << endl;
    cout << "Size of map after accessing a pair which is not available: " << m.size() << endl;


    // Printing
    for(auto i: m) {
        cout << i.first << " -> " << i.second << endl;
    }


}