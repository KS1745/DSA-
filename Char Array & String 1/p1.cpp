#include <iostream>
#include <string.h>
using namespace std;

int findLength(char ch[], int size) {

  int length = 0;
  int index = 0;

  while(ch[index] != '\0') {
    length++;
    index++;
  }
  return length;


  // for(int i=0; i<size; i++) {
  //   if(ch[i] == '\0') {
  //     //ruk jao
  //     break;
  //   }
  //   else {
  //     length++;
  //   }
  // }
  // return length;
}

int main() {

  char ch[100];

  //cin >> ch;
  cin.getline(ch, 100);

  int length= findLength(ch, 100);

  cout << "length of string is: " << length << endl;
  cout << "printing length: " << strlen(ch) << endl;  // we can also find length of string by using inbuit function

  
}