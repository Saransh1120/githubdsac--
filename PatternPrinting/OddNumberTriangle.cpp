/*
QUESTION: Odd Number Triangle
  Example: n = 4
    1
    1 3
    1 3 5
    1 3 5 7

YAAD RAKHO: j-th odd number = 2*j - 1.

LOGIC (short notes):
  - Triangle shape (j <= i), aur j ki jagah 2j-1 print.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // WAP to print first n odd numbers
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" "; // 1, 3, 5, 7 ...
        }
        cout<<endl;
    }
}
