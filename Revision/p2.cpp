#include <iostream>
using namespace std;

int lastOccurrence(int arr[],int n,int target) {

  int s = 0;
  int e = n-1;
  int ans = -1;
  int mid = s + (e-s)/2;

  while( s<=e ) {

    if(arr[mid] == target) {
      ans = mid;
      s = mid + 1;

    }
    else if(arr[mid] < target) {
      s = mid + 1;
    }

    else {
      e = mid - 1;
    }

    mid = s + (e-s)/2;
  }

  return ans;
}

int main() {

  int arr[] = {10,20,30,30,30,30,40,50};
  int size  = 8;
  int target = 30;

  cout << lastOccurrence(arr,size,target) << endl;
}