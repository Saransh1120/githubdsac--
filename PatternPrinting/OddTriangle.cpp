/*
QUESTION: Odd Star Triangle
  Example: n = 3
    *
    * * *
    * * * * *

YAAD RAKHO: row i me 2i-1 stars (1, 3, 5 ...).

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (use ho raha hai): formula -> j <= 2*i - 1.
  - Method 2 (comment me): stars variable, har row ke baad stars += 2.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Method 1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Method 2
    // int stars = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=stars;j++){
    //         cout<<"* ";
    //     }
    //     stars += 2;
    //     cout<<endl;
    // }
}
