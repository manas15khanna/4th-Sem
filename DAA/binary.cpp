#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target) 
{
  int left = 0, right = size - 1;
  while (left <= right) {
      int mid = left + (right - left) / 2;
      if (arr[mid] == target)
          return mid; // Target found
      else if (arr[mid] < target)
          left = mid + 1;
      else
          right = mid - 1;
} 
  return -1; // Target not found
}

int main() 
{
  int n, target, result;
  cout<<"Enter Size of Array"<<endl;
  cin>>n;
  int arr[n];
  int size = sizeof(arr) / sizeof(arr[0]);
  cout<<"Enter Array:"<<endl;
  for (int i=0; i<size; i++) {
    cin>>arr[i];
  }
  cout<<"Enter Value to Search"<<endl;
  cin>>target;
  result = binarySearch(arr, size, target);
  if (result != -1)
    cout << "Element found at index: " << result << endl;
  else
    cout << "Element not found in the array" << endl;
  return 0;
}

