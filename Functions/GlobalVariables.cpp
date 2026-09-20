/*
TOPIC: Global Variables

YAAD RAKHO: global variable (sab functions ke bahar) ko koi bhi function padh aur badal sakta hai.

LOGIC (short notes):
  - x = 7 global.
  - fun() ne x = 23 kar diya -> main ka x bhi 23 (same variable hai).
  - Output: 7, phir 23.
  - Global by default 0 hota hai.
*/
#include<iostream>
using namespace std;
int x = 7; // Global Variable
void fun(){
    x = 23; // global hi change hua
}
int main(){
    cout<<x<<endl; // 7
    fun();
    cout<<x<<endl; // 23
}
