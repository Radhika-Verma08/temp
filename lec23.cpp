#include <iostream>
using namespace std;

// Function to find the first and last occurrence of key
void BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    int first = -1, last = -1;

    // 🔹 Find first occurrence
    start = 0; end = n - 1;         //
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            first = mid;
            end = mid - 1;  // move left
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    // 🔹 Find last occurrence
    start = 0; end = n - 1;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            last = mid;
            start = mid + 1; // move right
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    // Print result
    if (first == -1)
        cout << "Key not found!";
    else
        cout << "First occurrence = " << first << ", Last occurrence = " << last;
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements (in ascending order): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    BinarySearch(arr, n, key);
    return 0;
}
