/*
QUESTION: Print 1 to n using Recursion (method 2 - do parameters)
  Example: n = 5 -> 1 2 3 4 5

YAAD RAKHO: print(x, n): x print, phir print(x+1, n). x > n pe ruk.

METHOD: x (current number) aur n (limit) dono parameter me bhejo.
  (Method 1 -> OneToN.cpp, Method 3 -> OneToN_Global.cpp)

LOGIC (short notes):
  - print(1, n) se start karo.
  - Pehle x print karo (work), phir print(x+1, n) (call).
  - BASE CASE: x > n -> ruk jao.
  - Yahan normal order me hi print hota hai kyunki x chhote se bada
    ho raha hai, isliye work call se pehle hai.

TIME: O(n)    SPACE: O(n) stack
*/
#include<iostream>
using namespace std;
void print(int x, int n){
    if(x>n) return; // base case
    cout<<x<<" "; // work
    print(x+1,n); // call
}
int main(){
    int n;
    cin>>n;
    print(1,n); // 1 se start
}
