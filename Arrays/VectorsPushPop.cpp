/*
TOPIC: Vector size vs capacity after push_back

YAAD RAKHO: vector<int> v(7) -> size 7, capacity 7. Ek push_back -> size 8, capacity 14 (double).

LOGIC (short notes):
  - v(7) -> 7 elements, sab 0.
  - Jagah full thi, to push_back pe capacity double -> 14.
  - Output: 7 7
            8 14
  - Detail me -> HowVectorWorks.cpp
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(7);
    cout<<v.size()<<" "<<v.capacity()<<endl; // 7 7
    v.push_back(-6);
    cout<<v.size()<<" "<<v.capacity()<<endl; // 8 14
}
