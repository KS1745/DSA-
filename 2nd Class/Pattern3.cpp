#include <iostream>
using namespace std;

int main(){

  int ROWS = 8;
  int COLS = 6;
  
  //outer loop
  for(int row = 0; row < ROWS; row = row + 1 ){
    
    //inner loop
    for(int col = 0; col < COLS; col = col + 1){
      
      //if zeroth or last row, then print star
      if( row == 0 || row == ROWS-1){
        cout << "* ";
      }
      else{
        if(col == 0 || col == COLS-1){
          cout << "* ";
        }
        else{
          cout << " ";
        }
      }

      
    }
    cout << endl;
  }
  
}