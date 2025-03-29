// Unique Element (Hint: XOR)


# include <iostream>
# include <vector>
using namespace std;


int unique(vector<int> arr) {

    int ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    return ans;

}


int main() {

    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    cout << "Unique element: " << unique(arr);
    
}