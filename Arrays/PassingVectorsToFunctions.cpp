/*
TOPIC: Passing Vectors to Functions (value vs reference)

YAAD RAKHO: vector array jaisa NAHI hai - by default COPY jaati hai. Original change karna ho to & lagao.

METHODS:
  - Method 1 (comment me - pass by value): void change(vector<int> v)
      poore vector ki copy banti hai. Copy change hui, original same.
      Output: 8
  - Method 2 (use ho raha hai - pass by reference): void change(vector<int>& v)
      original vector hi jaata hai. Output: 99

LOGIC (short notes):
  - Copy banane me O(n) time lagta hai, isliye bade vectors & se hi bhejo.
  - Sirf padhna ho to const vector<int>& v.
*/
#include<iostream>
#include<vector>
using namespace std;
// void change(vector<int> v){ // pass by value
//     v[2] = 99;
// }
void change(vector<int>& v){ // pass by reference
    v[2] = 99;
}
int main(){
    vector<int> v = {4,3,8,2,9,7};
    change(v);
    cout<<v[2]<<endl; // 99
}
