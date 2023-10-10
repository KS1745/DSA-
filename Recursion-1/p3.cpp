#include <iostream>
using namespace std;

void print(int n) {

  //Base Case
  if( n == 1 ) {
    cout << 1 << " ";
    return;
  }

  //Recursive Call
  print(n-1);
  
  //Processing
  cout << n << " ";
}

int main() {
  
  print(5);
  return 0;
}