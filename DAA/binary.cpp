#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter the element to search for: ";
    cin >> target;

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            cout << "Element found at index " << mid <<endl;
            return 0;
        }
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }

    cout << "Element not found" <<endl;
    return 0;
}
