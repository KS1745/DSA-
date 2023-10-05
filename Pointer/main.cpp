#include <iostream>
using namespace std;

int main() {

  // int a = 5;
  // cout << a << endl; 
  // cout << "address of a : " << &a << endl;

  //pointer creation
  //int* ptr = &a;
  //accessing value stored at address stored in ptr
  // cout << ptr << endl;
  // cout << "Accessing: " << *ptr << endl;
  // cout << &ptr << endl;

  // int a = 5;
  // int* ptr = &a;
  // cout << sizeof(ptr) << endl;

  // char ch = 'k';
  // char* cptr = &ch;
  // cout << sizeof(cptr) << endl;

  // int* ptr;
  // cout << *ptr << endl;
  
  // Null Pointer
  // int* ptr = 0;
  // cout << *ptr << endl;

//  int a = 5;
//  int* p = &a; 

//   p = p + 1; 
//   cout << *p;   // will throw garbage value

// int arr[5] = {10,20,30,40,50};
// arr = arr + 1;    // error

char ch[50] = "love";
char* cptr = ch;
cout << cptr;
cout << *cptr;

   



  return 0;
}