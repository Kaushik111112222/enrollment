#include <iostream>
using namespace std;

// area of square
int area(int side) {
    return side * side;
}

// area of rectangle
int area(int length, int breadth) {
    return length * breadth;
}

// area of circle
float area(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    int s, l, b;
    float r;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Area of square = " << area(s) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle = " << area(l, b) << endl;

    cout << "\nEnter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << area(r) << endl;

    return 0;
}
