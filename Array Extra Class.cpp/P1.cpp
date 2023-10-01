#include <iostream>
using namespace std;

void shiftNegativeOneSide(int arr[], int n){

  int j = 0;
  // j-> memory block -> jha pr hm negative number store kr skte hai

  for(int index = 0; index < n; index++){
    //index -> entire array ko traverse krne ke liye
    if(arr[index] < 0) {
      swap(arr[index], arr[j]);
      j++;
    }
  }
}

int main(){

  int arr[] = {23,-7,10,-12,-11,40,60};
  int n = 7;

  shiftNegativeOneSide(arr,n);

  //print
  cout << "Printing the array " << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

 
}