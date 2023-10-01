#include <iostream>
using namespace std;

// void diagonalSum(int arr[][4],int row, int col){

//       for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//           int sum = 0;
//           if( i == j ){
//             sum = sum + arr[i][j];
//           }
//           cout << sum << endl;
//         }
        
//       }
// }

int main(){
  
  int arr[4][4] = {
                  {1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}
  };

  int row = 4;
  int col = 4;
  
  int sum = 0;
  for(int i = 0; i < row; i++){
    sum = sum + arr[i][i];
  }
  cout << sum;
}