#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int>& nums) {
      int n = nums.size();
      int s = 0;
      int e = n-1;
      int mid = s + (e-s)/2;
      //int ans = -1;

      while(s<=e) {

        if(s == e) {
           return n;
        }
        else if (nums[mid] < nums[mid-1]) {
          return mid-1;
        }
        else if (nums[mid] > nums[mid+1]) {
          return mid;
        }
        mid = s + (e-s)/2;
      }
      return -1;
}

int main() {

   vector<int>v;
  
   v.push_back(2);
   v.push_back(4);
   v.push_back(6);
   v.push_back(8);
   v.push_back(11);

   int pivotIndex  = findPivotIndex(v);
   cout << "Pivot Index present in array is : " << pivotIndex;
   

}