#include <iostream>
using namespace std;

int main(){

  for(int row = 0; row < 5; row = row + 1){

    for(int col = 0; col < 5 - row; col = col + 1){

      cout << col + 1 << " ";
    }
    cout << endl;
  }
}