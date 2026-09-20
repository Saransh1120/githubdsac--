/*
TOPIC: For Each Loop (range-based for)
  Even numbers ko 2 se multiply karo, odd numbers ka square karo.
  Example: {4,3,8,2,9} -> {8,9,16,4,81}

YAAD RAKHO: for(int ele : v) -> ele COPY hai, change karne se v nahi badlega. Change chahiye to for(int& ele : v).

METHODS:
  - Method 1 (comment me - index wala loop): v[i] ko directly change
    karte hain -> vector sach me change hota hai. SAHI output.
  - Method 2 (use ho raha hai - for each): for(int ele : v)
    ele har element ki copy hai. ele change hua, v nahi.
    Isliye output original hi aata hai: 4 3 8 2 9
  - Fix: for(int& ele : v) -> & lagane se ele asli element ban jaata hai.

LOGIC (short notes):
  - For each loop tab best hai jab sirf padhna (print, sum) ho.
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9};
    // Multiply even numbers by 2, square the odd numbers
    // Method 1: index se -> v sach me change hota hai
    // for(int i=0;i<v.size();i++){
    //     if(v[i]%2 == 0) v[i] *= 2;
    //     else v[i] *= v[i];
    // }
    // Method 2: for each -> ele sirf copy hai, v change nahi hoga
    for(int ele : v){
        if(ele%2 == 0) ele *= 2;
        else ele *= ele;
    }
    for(int ele : v) cout<<ele<<" "; // 4 3 8 2 9 (same)
}
