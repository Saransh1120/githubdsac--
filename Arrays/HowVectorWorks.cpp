/*
TOPIC: How Vector Works (size vs capacity)

YAAD RAKHO: size = kitne elements hain; capacity = kitni jagah hai. Jagah full hone pe capacity DOUBLE hoti hai. pop_back se capacity kam nahi hoti.

LOGIC (short notes):
  - push_back pe agar size == capacity, to vector naya double size ka
    array banata hai aur saare elements copy karta hai.
  - Output (g++ pe):
      push 5 -> 1 1
      push 9 -> 2 2
      push 0 -> 3 4
      push 2 -> 4 4
      push 8 -> 5 8
      pop    -> 4 8   (capacity same)
      pop    -> 3 8
      push 1 -> 4 8
  - Capacity 1, 2, 4, 8, 16 ... badhti hai.
  - Isliye push_back average O(1) hai.
  - Apna vector kaise banate hain -> OOPS/MakeYourOwnVector.cpp dekho.
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    cout<<v.size()<<" "<<v.capacity()<<endl; // 1 1
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl; // 2 2
    v.push_back(0);
    cout<<v.size()<<" "<<v.capacity()<<endl; // 3 4 (double)
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity()<<endl; // 4 4
    v.push_back(8);
    cout<<v.size()<<" "<<v.capacity()<<endl; // 5 8 (double)
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl; // 4 8
    v.pop_back();
    cout<<v.size()<<" "<<v.capacity()<<endl; // 3 8
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl; // 4 8

    // vector<int> v;
    // v.push_back(5);
    // v.push_back(9);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(8);
    // v.push_back(4);
    // v.push_back(6);
    // v.push_back(1);
}
