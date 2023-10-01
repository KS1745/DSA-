#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int target) {

  int start = 0;
  int end = n-1;
  //there is some flaw in below line
  //int mid = (start+end)/2;

  while(start <= end) {
    int mid = (start + end)/2;
    //found
    if(arr[mid] == target) {
        //return index of the found element
        return mid;
    }
    else if (target > arr[mid]){
        //right me jao
        start = mid + 1;
    }
    else if (target < arr[mid]){
      //left me jao
      end = mid-1;
    }
    //mid update
    //mid = (start + end)/2;
  }

  //agar yha tk pahuche ho
  //iska mtlb element nhi mila tmhe
  return -1;
  
}


int main() {

  int arr[] = {10,20,30,40,50,60,70,80,90};
  int size = 9;
  int target = 10;

  int ansIndex = binarySearch(arr,size,target);

  if(ansIndex == -1) {
    cout << "Element not found " << endl;
  }
  else {
    cout << "Element found at Index: " << ansIndex << endl;
  }
}