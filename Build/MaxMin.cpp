//Write a program to find minimum and maximum element in an array of 10 elements
#include <iostream>
using namespace std;

int find_max(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int find_min(int arr[], int n) {
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int arr[10];
    cout << "Enter 10 elements: ";
    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    int max = find_max(arr, 10);
    int min = find_min(arr, 10);

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}
