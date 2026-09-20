/*
QUESTION: Maximum Number in an Array of Strings
  Numbers strings me hain (aage zero bhi ho sakte hain, aur bahut bade bhi).
  Example: {"0123","10023","456","001829","940","2901"} -> 10023

YAAD RAKHO: aage ke 0 hatao. Jiski real length zyada wo bada. Length same -> pehla alag digit compare.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me): stoll(arr[i]) se number banao aur compare.
      Problem: number long long se bada ho (20+ digits) to nahi chalega.
  - Method 2 (use ho raha hai): biggerNumber(s1, s2) - string se hi compare.
      Kitna bhi bada number ho, chalega.

LOGIC (biggerNumber):
  1. Leading zeros skip: i aur j pehle non-zero digit pe.
  2. Real length = length - zeros. Jiski zyada, wahi bada -> return.
  3. Length same -> dono ko saath chalao jab tak digits same hain.
  4. Poora same -> koi bhi return. Warna jiska digit bada, wo bada.
     (char compare chalta hai kyunki '0' < '1' < ... < '9' ASCII me.)
  - main me max = arr[0], har string se compare karke update.
*/
#include<iostream>
#include<string>
using namespace std;
string biggerNumber(string s1, string s2){
    int i = 0;
    while(s1[i] == '0') i++; // leading zeros skip
    int s1_Real_Length = s1.length() - i;
    int j = 0;
    while(s2[j] == '0') j++;
    int s2_Real_Length = s2.length() - j;
    if(s1_Real_Length > s2_Real_Length) return s1; // zyada digits -> bada
    if(s2_Real_Length > s1_Real_Length) return s2;
    while(i<s1.length() && s1[i] == s2[j]){ // same digits skip
        i++;
        j++;
    }
    if(i==s1.length()) return s1; // s1 and s2 are same numbers
    if(s1[i] > s2[j]) return s1; // pehla alag digit
    else return s2;
}
int main(){
    vector<string> arr = {"0123","10023","456","001829","940","2901"};
    string max = arr[0];
    int m = arr.size();
    for(int i=1;i<m;i++){
        max = biggerNumber(arr[i],max);
        // if(stoll(arr[i]) > stoll(max))
        //     max = arr[i];
    }
    cout<<max<<endl; // 10023
}
