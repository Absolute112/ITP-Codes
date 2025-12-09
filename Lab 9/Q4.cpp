#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& arr, int n, int index = 0, int currentMax = 0, int globalMax = INT_MIN) {
    if (index == n)
        return globalMax;

    currentMax = max(arr[index], arr[index] + currentMax);
    globalMax = max(globalMax, currentMax);
    return maxSubArray(arr, n, index + 1, currentMax, globalMax);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum Subarray Sum: " << maxSubArray(arr, n) << endl;
}
