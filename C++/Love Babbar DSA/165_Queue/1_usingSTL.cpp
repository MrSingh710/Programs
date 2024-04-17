#include <iostream>
#include <queue>
using namespace std;

int main()  {
    // Creation
    queue<int> q;

    // Insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    // Size
    cout << "Size of queue: " << q.size() << endl;

    // Front
    cout << "Front element: " << q.front() << endl;
    
    // Removal
    q.pop();

    if(q.empty()) {
        cout << "Q is empty" << endl;
    }
    else {
        cout << "Q is not empty" << endl;
    }

    cout << "Front element: " << q.front() << endl;

}