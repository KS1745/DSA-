#include <iostream>
using namespace std;

int findLastOccurrence(int arr[], int n, int target) {
  int s = 0; 
  int e = n-1;
  int mid = (s+e)/2;
  // Best Practice
  //int mid = s + (e-s)/2;
  int ans = -1;

  while(s<=e) {
    if(arr[mid] == target) {
      //ans store
      ans = mid;
      //right me jao
      s = mid + 1;

    }
    else if(target > arr[mid]) {
      //right me jao
      s = mid + 1;
    }
    else if (target < arr[mid]) {
      //left me jao
      e = mid - 1;
    }
    //galti yha krte hai hmesha
    mid = (s+e)/2;
  }
  return ans;
}

int main() {

  int arr[] = {30,30,30,30,30,30,70,80,90};
  int target = 30;
  int n = 9;

  int ansIndex = findLastOccurrence(arr, n, target);

  if(ansIndex == -1) {
    cout << "Element not found " << endl;
  }
  else {
    cout << "Element found at Index: " << ansIndex << endl;
  }
}