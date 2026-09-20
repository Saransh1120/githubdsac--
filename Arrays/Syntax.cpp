/*
TOPIC: Array Syntax - size, access, update, input

YAAD RAKHO: size = sizeof(arr)/sizeof(int); arr[i] se padho, arr[i] = x se update, cin>>arr[i] se input.

METHODS (size nikaalne ke tarike):
  - size(marks) -> C++17 me chalta hai, purane compiler me error (comment me).
  - sizeof(marks)/sizeof(int) -> hamesha chalta hai.

LOGIC (short notes):
  - Index 0 se start: marks[2] = teesra element = 91.
  - marks[2] = 23 -> value update.
  - cin>>marks[2] -> user se value lo.
*/
#include<iostream>
using namespace std;
int main(){
    int marks[] = {74,96,91,57,62,35,78,12};
    // cout<<size(marks)<<endl; // giving error in old cpp ver
    cout<<sizeof(marks)/sizeof(int)<<endl; // 8
    cout<<marks[2]<<endl; // 91 (access)
    marks[2] = 23; // update
    cout<<marks[2]<<endl; // 23
    cin>>marks[2]; // input
    cout<<marks[2]<<endl;
}
