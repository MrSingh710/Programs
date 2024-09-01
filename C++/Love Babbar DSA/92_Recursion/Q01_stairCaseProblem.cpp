// In this question, we are given a stair. We have to find the total number of ways to reach the last stair starting from 0th stair.

#include <iostream> 
using namespace std;

int climbStairs(int n) {

    if(n == 0 || n == 1) {
        return 1;
    }

    int ans = climbStairs(n - 1) + climbStairs(n - 2);

    return ans;

}


int main()  {
    int n;

    cout << "Enter the number of stairs: ";
    cin >> n;

    int totalWays = climbStairs(n);

    cout << "Total number of ways to reach " << n << " stairs = " << totalWays << endl;

}