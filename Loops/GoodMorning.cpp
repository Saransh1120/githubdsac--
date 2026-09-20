/*
QUESTION: Print a name n times
  Example: n = 3 -> "Raghav Garg" 3 baar

YAAD RAKHO: for(int i=1;i<=n;i++) -> n baar chalta hai.

LOGIC (short notes):
  - i = 1 se n tak -> n iterations.
  - Same kaam i = 0 se i < n se bhi hota hai.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Raghav Garg"<<endl;
    }
}
