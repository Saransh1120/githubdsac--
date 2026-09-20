/*
QUESTION: Star Triangle - Vertically Flipped (right aligned)
  Example: n = 3
        *
      * *
    * * *

YAAD RAKHO: row i: n-i spaces, phir i stars. (ya grid me (i + j) > n -> star)

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (use ho raha hai): do andar ke loops -> pehle n-i spaces, phir i stars.
  - Method 2 (comment me): n x n grid, (i + j) > n ho to star, warna space.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Method 1
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ // n+1-i ki jagah n-i
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // Method 2
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if((i+j)>n) cout<<"* ";
    //         else cout<<"  ";
    //     }
    //     cout<<endl;
    // }
}
