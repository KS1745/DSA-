#include <iostream>
using namespace std;
#include<vector>

// void fun(int a[], int n){
//      for(int i=0; i<n; i++){
//       cout << a[i] << endl;
//      }
// }
int main(){
  //static memory allocation of array
  //int arr[5] = {1,2,3,4,5};

  //dynamic 
  // int n;
  // cin >> n;
  // int *arr = new int[n];

  // fun(arr,5);

  int arr[5];
  // vector<int> v;
  // vector<int> v(5);
  vector<int>v(5,101);

  cout << "Size of vector: " << v.size();

  cout << endl << "Printing vector" << endl;
  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }cout << endl;

  return 0;
}