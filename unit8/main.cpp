#include <iostream>
using namespace std;


/*

2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32

*/

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}


//linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) return i;
        cout << i << endl;
    }
    return -1;
}

//binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1, count = 0;

    while (left <= right) {
        cout << count++ << endl;
        int mid = left + (right - left) / 2; // Avoid integer overflow

        if (arr[mid] == target){ 
            return mid; // Found target in middle
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search right half
        } 
        else {
            right = mid - 1; // Search left half
        }
    }

    return -1; // Target not found
}


int main() {
    int index;
    int arr[] = {36, 38, 39, 42, 45, 49, 50, 75, 78, 80, 100, 110, 125, 135, 140, 150, 1, 2, 3, 4, 5, 7, 8, 12, 20, 35};
    selectionSort(arr, 26);

    int target = 150;
    cout<< "\n ******************************************** \n linear search \n ******************************************** \n" << endl;
    index = linearSearch(arr, 26, target);
    if (index != -1) cout << "Found at index: " << index << endl;
    else cout << "Not found." << endl;
    cout<< "\n ******************************************** \n binary search \n ******************************************** \n" << endl;
    index = binarySearch(arr, 26, target);
    if (index != -1) cout << "Found at index: " << index << endl;

    else cout << "Not found." << endl;
    
    return 0;
}
