#include <iostream>
#include <algorithm>   // for std::find
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    auto it = find(arr, arr + n, key);  // performs linear search

    if (it != arr + n) {
        cout << "Element " << key << " found at position " << (it - arr + 1) << " (Linear Search with STL)." << endl;
    } else {
        cout << "Element " << key << " not found." << endl;
    }

    return 0;
}

/*OUTPUT
Enter number of elements: 5
Enter 5 elements: 1 2 3 4 5
Enter element to search: 2
Element 2 found at position 2 (Linear Search with STL).
*/
