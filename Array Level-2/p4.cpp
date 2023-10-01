#include <iostream>
using namespace std;

void sortZeroOne(int arr[],int size){

  int zeroCount = 0;
  int oneCount = 0;

  //stepA:Count 0 and 1
  for(int i = 0; i < size; i++){
    if(arr[i] == 0){
      zeroCount++;
    }
    if(arr[i] == 1){
      oneCount++;
    }

  }

  //Step B : place all zeroes first
  // int i;
  // for(i=0; i<countZero; i++){
  //   arr[i] = 0;
  // }
  
  //Step C: then place all ones
  // for(int j = i; j<size; j++){
  //   arr[j] = 1;

  // }

  //EASY WAY
  int index = 0;

  while(zeroCount--){
    arr[index] = 0;
    index++;
  }

  while(oneCount--){
    arr[index] = 1;
    index++;
  }
  
}

int main(){

  int arr[] = {0,1,0,1,0,1,1,1,1,0,0,0,0,0};
  int size = 14;

  sortZeroOne(arr,size);

  //printing the array
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}

