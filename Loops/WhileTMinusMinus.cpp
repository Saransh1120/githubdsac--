/*
TOPIC: while(--t) - kitni baar chalega?
  t = 4 -> "Hello" kitni baar?

YAAD RAKHO: while(--t) -> t-1 baar chalega. while(t--) -> t baar.

LOGIC (dry run):
  - --t -> 3 (true) Hello
  - --t -> 2 (true) Hello
  - --t -> 1 (true) Hello
  - --t -> 0 (false) ruk
  - Total 3 baar.
  - while(t--) hota to 4, 3, 2, 1 pe chalta -> 4 baar.
    (CP me test cases ke liye while(t--) use hota hai.)
*/
#include<iostream>
using namespace std;
int main(){
    int t = 4;
    while(--t){ // 3, 2, 1 -> 3 baar
        cout<<"Hello"<<endl;
    }
}
