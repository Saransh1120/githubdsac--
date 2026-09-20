/*
TOPIC: Vector of Vectors (Jagged Array)
  Alag alag size ke vectors ko ek 2D vector me rakho aur print karo.

YAAD RAKHO: 2D vector ki har row ka size alag ho sakta hai (jagged) -> andar ke loop me v[i].size() lo.

METHODS (2D vector banane ke do tarike):
  - Method 1 (use ho raha hai): vector<vector<int>> v = {v1,v2,v3,v4};
  - Method 2 (comment me): khaali v banao, phir v.push_back(v1) ... karo.

LOGIC (short notes):
  - Jagged array = aisa 2D array jisme har row ki length alag ho.
  - Normal 2D array (int arr[3][4]) me aisa nahi ho sakta, vector me ho sakta hai.
  - Output:
      3 7 2 8 9
      9 2 9
      4 4 4 4
      10
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {3,7,2,8,9};
    vector<int> v2 = {9,2,9};
    vector<int> v3 = {4,4,4,4};
    vector<int> v4 = {10};

    vector<vector<int>> v = {v1,v2,v3,v4}; // Jagged Array
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){ // har row ka apna size
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // method 2:
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // v.push_back(v4);
}
