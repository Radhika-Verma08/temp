#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    int start = 0, end = arr.size() - 1;

    // Sort the array first if not sorted
    // sort(arr.begin(), arr.end()); // optional if array is sorted

    while (start < end) {
        if (arr[start] + arr[end] == target) {
            return {start, end}; // return indices
        } else if (arr[start] + arr[end] < target) {
            start++;
        } else {
            end--;
        }
    }
    return {}; // empty vector if no pair found
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target = 22;

    vector<int> ans = twoSum(arr, target);

    if (!ans.empty()) {
        cout << "Indices of elements that add to target: ";
        for (int x : ans)
            cout << x << " ";
        cout << endl;
    } else {
        cout << "No two elements add up to target." << endl;
    }
}
