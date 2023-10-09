#include <iostream>
using namespace std;

int expand(string s,int i, int j) {
         int count = 0;

         while(i >= 0 && j < s.length() && s[i] == s[j]) {
             count++;
             i--;
             j++;
         }
         return count;
    }
    int countSubstrings(string s) {
        int totalCount = 0;

        for(int center = 0; center < s.length(); center++) {
         int oddAns = expand(s, center,center);

         int evenAns = expand(s, center, center+1);
         totalCount = totalCount + oddAns + evenAns;
        }
        return totalCount;
    }

int main() {
    string s = "Kartikay";
    cout << "Total number of palindrome substring present in this string is : "<<countSubstrings(s)<< endl;
}