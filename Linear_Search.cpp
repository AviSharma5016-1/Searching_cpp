#include <iostream>
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

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at position " << i + 1 << " (Linear Search)." << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element " << key << " not found." << endl;

    return 0;
}

/*OUTPUT
Enter number of elements: 5
Enter 5 elements: 1 2 3 4 5
Enter element to search: 4
Element 4 found at position 4 (Linear Search).
*/
