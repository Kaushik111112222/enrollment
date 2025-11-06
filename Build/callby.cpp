#include <iostream>
using namespace std;

void byValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " and b = " << b << endl;
}

void byPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void byReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\nOriginal values: a = " << a << ", b = " << b << endl;

    cout << "\n--- Call by Value ---" << endl;
    byValue(a, b);
    cout << "After call by value: a = " << a << ", b = " << b << endl;

    cout << "\n--- Call by Pointer ---" << endl;
    byPointer(&a, &b);
    cout << "After call by pointer: a = " << a << ", b = " << b << endl;

    cout << "\n--- Call by Reference ---" << endl;
    byReference(a, b);
    cout << "After call by reference: a = " << a << ", b = " << b << endl;

    return 0;
}
