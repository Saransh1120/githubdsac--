/*
QUESTION: Star Triangle - Horizontally Flipped (ulta triangle)
  Example: n = 3
    * * *
    * *
    *

YAAD RAKHO: row i me n+1-i stars (n, n-1, ... 1).

METHODS (sir ne 3 methods kiye hain):
  - Method 1 (comment me - formula): j <= n+1-i.
  - Method 2 (comment me - ulta loop): i = n se 1 tak, j <= i.
  - Method 3 (use ho raha hai - variable): a = n se start, har row ke baad a--.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Method 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Method 2
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Method 3
    int a = n; // stars in current row
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            cout<<"* ";
        }
        a--;
        cout<<endl;
    }
}
