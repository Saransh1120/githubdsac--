/*
TOPIC: Built-in sort() on vector (part of vector ko sort karna)
  Example: v = {4,3,8,2,9}
           sort(v.begin()+1, v.end()-1) -> {4,2,3,8,9}

YAAD RAKHO: sort(start, end) -> start include, end EXCLUDE. Poora sort = sort(v.begin(), v.end()).

LOGIC (short notes):
  - sort() <algorithm> header me hota hai.
  - v.begin() -> pehle element ki position, v.end() -> last ke BAAD ki position.
  - v.begin()+1 -> index 1 se, v.end()-1 -> last element se pehle tak.
    To sirf index 1, 2, 3 (3,8,2) sort honge -> 2,3,8. First (4) aur
    last (9) same rahenge.
  - Descending: sort(v.begin(), v.end(), greater<int>());
  - (Top wala comment "2 3 4 8 9" poore sort ka answer hai.)

TIME: O(n log n)
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v = {4,3,8,2,9}; // 2 3 4 8 9 (poora sort karne pe)
    sort(v.begin()+1,v.end()-1); // sirf beech ka part -> 4 2 3 8 9
    for(int ele : v) cout<<ele<<" ";
}
