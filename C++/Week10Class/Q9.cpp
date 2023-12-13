#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int size = 10;
    vector<int> randomNumbers;
    for (int i = 0; i < size; ++i)
    {
        randomNumbers.push_back(rand() % 100);
    }

    cout << "Unsorted List: ";
    for (const auto &num : randomNumbers)
    {
        cout << num << " ";
    }
    cout << endl;
    sort(randomNumbers.begin(), randomNumbers.end());

    cout << "Sorted List: ";
    for (const auto &num : randomNumbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

