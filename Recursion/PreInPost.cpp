/*
TOPIC: Pre, In, Post order (recursion me print kab hota hai)
  Ek function jo khud ko 2 baar call karta hai, aur 3 jagah print
  karta hai. Output ka order samjho.

YAAD RAKHO: call se pehle = PRE, dono calls ke beech = IN, baad me = POST. Recursion tree bana ke dry run karo.

LOGIC (short notes):
  - Pehla cout  -> PRE  (calls se pehle)
  - Beech ka    -> IN   (dono calls ke beech)
  - Last cout   -> POST (dono calls ke baad)
  - print(1): 1, print(0), 1, print(0), 1 -> "1 1 1"
  - print(2): 2, [1 1 1], 2, [1 1 1], 2 -> "2 1 1 1 2 1 1 1 2"
  - print(3): 3, [print(2)], 3, [print(2)], 3
    Output: 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3
  - Ye trick Binary Tree traversal (preorder, inorder, postorder) me
    kaam aayegi.
  - Recursion tree bana ke dry run karo, tab clear hoga.

TIME: O(2^n) (har call 2 calls banati hai)
*/
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;
    cout<<n<<" "; // pre
    print(n-1);
    cout<<n<<" "; // in
    print(n-1);
    cout<<n<<" "; // post
}
int main(){
    print(3);
}
