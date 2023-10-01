#include <iostream>
using namespace std;

void pairsInArray(int arr[],int size){

  for(int i = 0; i < size; i++){
    for(int j = i; j < size; j++){
      //cout << arr[i] << ", " << arr[j] << endl;
      cout << "(" << arr[i] << "," << arr[j] << ")";
    } 
    cout << endl;
    
  }
}

int main(){

  int arr[3] = {10,20,30};
  int size = 3;

  pairsInArray(arr,size);
}