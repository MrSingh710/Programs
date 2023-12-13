#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    Date operator+(int days) const {
        // Logic for adding days to the date
        return Date(day + days, month, year);
    }

    Date operator-(int days) const {
        // Logic for subtracting days from the date
        return Date(day - days, month, year);
    }

    bool operator<(const Date &other) const {
        // Logic for date comparison
        return (year < other.year || (year == other.year && (month < other.month || (month == other.month && day < other.day))));
    }

    void display() const {
        cout << day << "-" << month << "-" << year << endl;
    }
};

int main() {
    Date today(4, 11, 2023);
    Date future = today + 7;
    Date past = today - 3;

    cout << "Today's Date: ";
    today.display();
    cout << "Date after 7 days: ";
    future.display();
    cout << "Date 3 days ago: ";
    past.display();

    if (past < today) {
        cout << "The past date is earlier than today." << endl;
    } else {
        cout << "The past date is not earlier than today." << endl;
    }

    return 0;
}