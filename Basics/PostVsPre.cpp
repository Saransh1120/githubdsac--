/*
TOPIC: Post vs Pre (decrement) inside cout

YAAD RAKHO: --x -> pehle ghatao, phir print (9). x-- -> pehle print (10), phir ghatao.

METHODS / CASES:
  - Case 1 (comment me - post):  cout<<x--  -> 10 print, phir x = 9
                                  cout<<x    -> 9
  - Case 2 (use ho raha hai - pre): cout<<--x -> x = 9, phir 9 print
                                    cout<<x   -> 9
*/
#include <iostream>
using namespace std;
int main(){
    // int x = 10;
    // cout<<x--<<endl; // 10
    // cout<<x<<endl;   // 9

    int x = 10;
    cout<<--x<<endl; // 9
    cout<<x<<endl;   // 9
}
