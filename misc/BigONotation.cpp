#include <iostream>

using namespace std;

// Accessing element at index (constant time)
int elementAt(int arr [], int i)
{
  return arr[i];
}

// binary search (log n time)
bool binarySearch(int arr[], int n, int target) {
  int low = 0, numIterations = 0;
  int high = n - 1;

  while (low <= high) {
    numIterations ++;
    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
      return true;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  } 
  cout << "this algorithm ran " << numIterations << " times. ";
  return false;
}

// linear search ( n time )
bool linearSearch(int arr[], int n, int target) {
  int numIterations = 0;
  for (int i = 0; i < n; i++) {
    numIterations++;
    if (arr[i] == target) {
      return true;
    }
  }
  cout << "this algorithm ran " << numIterations << " times. ";
  return false;
}

int main() {
  int arr[] = {2, 3, 4, 10, 40, 45, 50, 55, 65, 70, 100, 108 ,109, 123, 127, 956, 1024, 1029, 1327, 1490, 1900, 2345, 65444};
  cout << "constant time : " << elementAt(arr, 2) << endl;
  
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 65443;

  if (binarySearch(arr, n, target)) {
    cout << target << " found in the array" << endl;
  } else {
    cout << target << " not found in the array" << endl;
  }


  if (linearSearch(arr, n, target)) {
    cout << target << " found in the array" << endl;
  } else {
    cout << target << " not found in the array" << endl;
  }

  return 0;



}

