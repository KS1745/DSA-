
// #include <iostream>
// #include <limits.h>
// using namespace std;

//  int minimumNoInArray(int arr[], int size){

//    int minAns = INT_MAX;

//    for(int i = 0; i < size; i++){

//      if( arr[i] < minAns){

//       minAns = arr[i];
//      }
    
//    }
//    return minAns;
//  }

// int main(){

//    int arr[] = {20,4,15,2,6,8,-11};
//    int size = 7;

//     int ans = minimumNoInArray(arr,size);
//     cout << "Minimum Number Present in this array is : " << ans << endl;

//   // -2 to the power 31
//   //cout << INT_MIN << endl;
//   // 2 to the power 31 - 1
//   //cout << INT_MAX << endl;

// }

#include <iostream>
#include <limits.h>
using namespace std;

int maximumNo(int arr[],int size){

  int maximum = INT_MIN;

  for(int i = 0; i < size; i++){

    maximum = max(maximum,arr[i]);  // we can also use inbuilt max function to find maximum

    // if(arr[i] > maximum){

    //   maximum = arr[i];
    // }
  }
  return maximum;
}

int main(){

  int arr[5] = {1,2,10,4,2};
  int size = 5;

  cout << maximumNo(arr,size) << endl;
}