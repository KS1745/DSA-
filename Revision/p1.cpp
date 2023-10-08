#include <iostream>
using namespace std;

int firstOccurrence(int arr[],int n,int target) {

  int s = 0;
  int e = n-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  
  while( s<=e ){

    if(arr[mid] == target) {
        // ans = mid;
        e = mid - 1;
        ans = mid;
    
    }
    else if(target > arr[mid]){
       s = mid + 1;
    
    }
    else{
    e = mid - 1;
    }

    mid = s + (e-s)/2;

  }
  

  return ans;

}

int main() {

  int arr[] = {10,20,40,30,30,30,40,50};
  int size = 8;
  int target = 30;

  cout << firstOccurrence(arr,size,target);
}