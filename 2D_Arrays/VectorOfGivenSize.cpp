/*
TOPIC: 2D Vector of given size (m x n)
  User se rows aur cols lo, us size ka 2D vector banao (sab 0), ek aur
  row add karo aur print karo.

YAAD RAKHO: vector<vector<int>> arr(m, vector<int>(n, 0));  -> m rows, har row me n zeros.

LOGIC (short notes):
  - Bahar ka vector = rows, andar ka vector = ek row.
  - vector<int>(n, 0) -> n size ki row jisme sab 0.
  - arr.push_back(vector<int>(4,-1)) -> end me ek nayi row jisme 4 baar -1.
    Ye row baaki rows se alag size ki ho sakti hai (2D vector me allowed).
  - Print karte time arr.size() = rows, arr[i].size() = us row ke columns.
    Isliye alag size ki rows bhi sahi print hoti hain.
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows: ";
    cin>>m;
    cout<<"Enter cols: ";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n,0)); // m x n, sab 0
    arr.push_back(vector<int>(4,-1)); // nayi row: -1 -1 -1 -1
    // Output
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){ // har row ka apna size
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
