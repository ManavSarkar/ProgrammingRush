#include <iostream>
using namespace std;
/* Program for Binary Search

{1, 3, 4,5, 6, 23,25, 31, 35,38, 40, 42,43, 50, 58}
key = 23
left = 0;
right =14;
mid = left+(right-left)/2;

*/

int binarySearch(int arr[], int key, int size)
{
    int left = 0;
    int right = size - 1;
    int mid;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 4,
                 5, 6, 23,
                 25, 31, 35,
                 38, 40, 42,
                 43, 50, 58};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    cin >> key;
    cout << binarySearch(arr, key, size) << endl;
    return 0;
}