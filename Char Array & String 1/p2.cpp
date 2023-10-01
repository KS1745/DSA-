#include <iostream>
using namespace std;

void reverseString(char ch[], int n) {
   
   int i = 0;
   int j = n-1;

   while(i<j) {
      swap(ch[i], ch[j]);
      i++;
      j--;
   }

   

}

int findLength(char ch[], int size) {

  int length = 0;
  int index = 0;

  while(ch[index] != '\0') {
    length++;
    index++;
  }
  return length;
}

int  main() {

  char ch[100];
  //cin >> ch;
  cin.getline(ch, 100);

  cout << "Before " << ch << endl;
  int length= findLength(ch, 100);
  reverseString(ch, length);
  cout << "After " << ch << endl;

}