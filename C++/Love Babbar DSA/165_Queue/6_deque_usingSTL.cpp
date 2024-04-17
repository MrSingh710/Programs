#include <iostream>
#include <deque>
using namespace std;

int main()  {

    deque<int> dq;

    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);

    cout << "Size: " << dq.size() << endl;

    dq.pop_front();
    dq.pop_back();
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    if(dq.empty()) {
        cout << "DQ is empty" << endl;
    }
    else {
        cout << "DQ is not empty" << endl;
    }

}