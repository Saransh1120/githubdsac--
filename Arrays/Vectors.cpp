/*
TOPIC: Vectors basics - vector(n, value), push_back, pop_back

YAAD RAKHO: vector<int> arr(n, x) -> n elements, sab x. push_back = end me add, pop_back = end se hatao.

LOGIC (short notes):
  - vector<int> arr(8,-1); -> 8 elements (index 0 se 7), sab -1.
    (Code ka comment "index 0 to 4" purana hai, ab 0 to 7 hai.)
  - Vector ka size badal sakta hai, normal array ka nahi.
  - arr.size() -> kitne elements.
  - push_back(5), push_back(14) -> ... 5 14
    pop_back()                  -> 14 hat gaya
    push_back(7)                -> ... 5 7
  - Final: -1 -1 -1 -1 -1 -1 -1 -1 5 7
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8,-1); // index 0 to 7, sab -1
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5); // adds an element at end
    arr.push_back(14);
    arr.pop_back(); // removes last element
    arr.push_back(7);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
