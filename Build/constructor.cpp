#include <iostream>
using namespace std;

class Date {
    int day, month, year;   // data members

public:
    // constructor to initialize default date
    Date() {
        day = 1;
        month = 1;
        year = 2001;
    }

    // function to set date
    void set_date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // function to display date
    void display_date() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d1;  // object created with default date

    cout << "Default ";
    d1.display_date();

    int d, m, y;
    cout << "\nEnter day, month and year: ";
    cin >> d >> m >> y;

    d1.set_date(d, m, y);   // set new date
    cout << "Updated ";
    d1.display_date();

    return 0;
}
