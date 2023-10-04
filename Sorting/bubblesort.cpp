#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n) {

  for(int i = 1; i < n; i++) {
    //for round 1 to n-1

    for(int j = 0; j<n-1; j++) {
      //process element
      if(arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
      }
    }
  }
}

int main() {

   int arr[] = {10,1,7,6,14,9};
   int n = 6;

   bubbleSort(arr,n);
   for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
   }

}