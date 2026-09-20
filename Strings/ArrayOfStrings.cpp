/*
TOPIC: Array of Strings

YAAD RAKHO: arr[i] = i-th string, arr[i][j] = us string ka j-th character.

LOGIC (short notes):
  - arr[2] = "Shivam", arr[2][3] = 'v' (S=0, h=1, i=2, v=3).
  - vector<string> ke saath bhi same (Recursion/ArrayOfStrings.cpp).
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"Deeksha","Anu","Shivam"};
    cout<<arr[2][3]<<endl; // v
}
