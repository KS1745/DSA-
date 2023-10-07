#include <iostream>
using namespace std;

void replaceCharacter(char ch[], int n) {
    int index = 0;

    while(ch[index] != '\0') {
      

      if(ch[index] == '@') {
        //insert space
        ch[index] = ' ';
      }
      index++;
    }
}

int main() {

  char ch[100];

  cin.getline(ch, 100);

  cout << "before: " << ch << endl;
  replaceCharacter(ch,100);
  cout << "after: " << ch << endl;


}