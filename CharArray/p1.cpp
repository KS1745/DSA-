#include <iostream>
#include <string.h>
using namespace std;

int findLength(char ch[], int size) {

  // int len = 0;
  int index = 0;
  while(ch[index] != '\0') {
   // len++;
    index++;
  }
  return index;
  
  // int length = 0;

  // for(int i=0; i<size; i++) {
  //   if(ch[i] == '\0') {
  //     //ruk jao
  //     break;
  //   }
  //   else {
  //     length++;
  //   }
  // }
  
}


int main() {

 
   char ch[100];

   cin >> ch;
   //cin.getline(ch,100);

   int len = findLength(ch, 100);

   cout << "length of string is: " << len << endl;
   cout << "Printing length:  " << strlen(ch) << endl;  //inbuilt function to find length of string
  
}