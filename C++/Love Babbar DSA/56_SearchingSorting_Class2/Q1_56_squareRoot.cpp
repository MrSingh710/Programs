#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double sqRt(int number, int noOfDec) {
    /*
    Computes the square root(both integer and decimal part)
    of a given number using binary search for search 
    space 0 to number including decimals
    (Eg-> 0, 0.00001, 0.00002, _ _ _ _, 9.99999, 10)
    */
   // Integer Part
    double s = 0;
    double e = number;
    double intPart = 0;
    while(s <= e) {
        double mid = s + (e - s) / 2;
        if((mid * mid) == number) {
            return mid;  
        }
        else if((mid * mid) < number) {
            intPart = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    double ans = intPart;
    
    // Decimal Part
    double step = 1.0;
    while(noOfDec--) {
        step = step / 10;
    } 
    
    for(double decPart = ans; decPart * decPart <= number; decPart = decPart + step) {
        ans = decPart;
    } 
    return ans;

}

int sqRtIntPart(int number) {
    int s = 0;
    int e = number;
    int intPart = 0;
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if((mid * mid) == number) {
            return mid;  
        }
        else if((mid * mid) < number) {
            intPart = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;            
        }
    }
    return intPart;
}

// double sqRt(int number, double intPart, int noOfDec) {
//     double step = 0.1;
//     double ans = intPart; 
//     for(int i = 0; i < noOfDec; i++) {
//         for(double decPart = ans; decPart * decPart <= number; decPart = decPart + step) {
//             ans = decPart;
//         }
//         step = step / 10;
//     }
//     return ans;
// }


int main() {
    int n, noOfDec;
    cout << "Enter the number whose square root is to found: ";
    cin >> n;
    cout << "Enter the number of decimals to be shown: ";
    cin >> noOfDec;
    cout << setprecision(noOfDec + 1);

    //double ans = sqRt(n);
    int intPart = sqRtIntPart(n);
    double ans = sqRt(n, noOfDec);

    cout << "Square root of " << n << ": " << ans << endl; 

}