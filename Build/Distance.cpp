#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Function to set values using arguments
    void setdist(int f, float i) {
        feet = f;
        inches = i;
    }

    // Function to get values from user
    void getdist() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    // Function to display distance
    void showdist() {
        cout << "Distance = " << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1;

    cout << "Enter distance:" << endl;
    d1.getdist();

    cout << "\n--- Displaying Distances ---" << endl;
    d1.showdist();

    return 0;
}
