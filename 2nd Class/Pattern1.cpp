#include <iostream>
using namespace std;

int main(){
  
  //outer loop -> rows
  for(int i = 0; i < 4; i=i+1){
    
    //inner loop -> print 4 stars
    for(int j = 0; j < 4; j=j+1){
      cout<< "*"<< " ";
    }
    cout<<endl;
  }
}