// Jaspreet Singh 2022BCSE019
#include<iostream>
using namespace std;

int findDifference(int hour1, int minute1, int second1, int hour2, int minute2, int second2) {
    int time1InSeconds = hour1 * 3600 + minute1 * 60 + second1;
    int time2InSeconds = hour2 * 3600 + minute2 * 60 + second2;
    return time1InSeconds - time2InSeconds;
}

int findDifference(int date1, int month1, int year1, int hour1, int minute1, int second1,
                  int date2, int month2, int year2, int hour2, int minute2, int second2) {
    
    int time1InSeconds = (year1 * 31536000) + (month1 * 2592000) + (date1 * 86400) +
                         (hour1 * 3600) + (minute1 * 60) + second1;
    int time2InSeconds = (year2 * 31536000) + (month2 * 2592000) + (date2 * 86400) +
                         (hour2 * 3600) + (minute2 * 60) + second2;
    return time1InSeconds - time2InSeconds;
}

int main(){
    int timeDifference = findDifference(12, 40, 15, 8, 45, 30);
    cout << "Time difference in seconds: " << timeDifference << " sec"<<endl;

    int dateTimeDifference = findDifference(2023, 9, 15, 12, 0, 0, 2023, 9, 11, 14, 30, 0);
    cout << "DateTime difference in seconds: " << dateTimeDifference<< " sec" <<endl;

    return 0;
}