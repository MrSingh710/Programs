// Different initialisations

# include <iostream>
# include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the capacity of the vector to be made: ";
    cin >> n;

    vector<int> brr(n, -1);
    for (int i = 0; i < brr.size(); i++) {
        cout << brr[i] << "  ";
    } 

    cout << "\nPrinting crr" << endl;
    vector<int> crr{10, 20, 30, 40, 50};
    for (int i = 0; i < crr.size(); i++) {
        cout << crr[i] << "  ";
    } 

} 