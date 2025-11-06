#include <iostream>
using namespace std;

void traverse(int arr[], int n)
{
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

float average(int arr[], int n)
{
    int sum = sumArray(arr, n);
    return (float)sum / n;
}

int main()
{
    int n, choice;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[50];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    do
    {
        cout << "\n---- Menu ----\n";
        cout << "1. Traverse array\n";
        cout << "2. Find minimum\n";
        cout << "3. Find maximum\n";
        cout << "4. Sum of elements\n";
        cout << "5. Average of elements\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            traverse(arr, n);
            break;
        case 2:
            cout << "Minimum element: " << findMin(arr, n) << endl;
            break;
        case 3:
            cout << "Maximum element: " << findMax(arr, n) << endl;
            break;
        case 4:
            cout << "Sum of elements: " << sumArray(arr, n) << endl;
            break;
        case 5:
            cout << "Average: " << average(arr, n) << endl;
            break;
        case 6:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
