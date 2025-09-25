#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements (sorted order): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Element " << key << " found at position " << mid + 1 << " (Binary Search)." << endl;
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Element " << key << " not found." << endl;

    return 0;
}

/*OUTPUT
Enter number of elements (sorted order): 5
Enter 5 sorted elements: 1 2 3 4 5
Enter element to search: 3
Element 3 found at position 3 (Binary Search).
*/
