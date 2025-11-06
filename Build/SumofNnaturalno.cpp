//Write a program to print the sum of first N natural odd & even nos.

#include<iostream>
using namespace std;

int main() {
    int sum_even = 0, sum_odd = 0, i, n;
    cout << "Enter n : ";
    cin >> n;
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            sum_even += i;
        else
            sum_odd += i;
    }

    cout << "Sum of even = " << sum_even << endl;
    cout << "Sum of odd = " << sum_odd << endl;

    return 0;
}
