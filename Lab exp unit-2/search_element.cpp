//write a recursive function to search an element from an array
#include <iostream>
using namespace std;
int searchElement(int arr[], int n, int target, int index = 0) {
    if (index == n) {
        return -1;
    }
    if (arr[index] == target) {
        return index;
    }
    return searchElement(arr, n, target, index + 1);
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;
    int result = searchElement(arr, n, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
