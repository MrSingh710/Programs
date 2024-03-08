# include <iostream>
using namespace std;

int main() {
    int size, arr[100];
    int ans1 = 0;
    int count1;
    int count2 = 0;

    cout << "Enter the size of the array: " << endl;
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++) {
        count1 = 0;
        for (int j = 0; j < size; j++) {
            
            if (arr[i] == arr[j]) {
                count1++;
            }
        }
        if (count1 > count2) {
            count2 = count1;
            ans1 = i;
        }
    }
    cout << "Mode: " << arr[ans1] << endl;
}