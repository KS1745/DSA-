#include <iostream>
using namespace std;

// void solve(int& a){   //Pass by reference mein copy create nhi hoti hai actual memory location me kaam kr rhe hote hai
//  a++;

//   cout << "Printing inside solve functions: " << a << endl;
// }

// int main(){

//   int a = 5;
//   solve(a);

//   cout << "Printing inside main function: " << a << endl;
// }

void solve(int arr[] , int n){
   arr[0] = 100;
}

int main(){
     
     int arr[] = {1,2,4};
     int size = 3;

     solve(arr,size);

     for(int i=0; i<size; i++){
      cout << arr[i] << " ";
     }
     cout << endl;

} 