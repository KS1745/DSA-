#include <iostream>
using namespace std;

int main() {
    
    //creation
    string name;

    //input
    //cin >> name;
    getline(cin,name);

    //print
    cout << "Printing name: " << name << endl;

   // cout << "Printing first character " << name[0] << endl;

  //  int index = 0;
  //  while(name[index] != '\0') {
  //     cout << "index: " << index << " character: " << name[index] << endl;
  //     index++;
  //  }

  //  cout << "Printing index 6th value: " << name[6] << endl;
  //  int value = (int)name[6];
  //  cout << "Value: " << value << endl;
}