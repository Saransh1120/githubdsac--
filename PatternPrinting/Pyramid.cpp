/*
QUESTION: Star Pyramid
  Example: n = 3
        *
      * * *
    * * * * *

YAAD RAKHO: row i: pehle n-i spaces, phir 2i-1 stars. (ya nsp = n-1, nst = 1 se shuru: nsp--, nst += 2)

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me - formula): spaces = n-i, stars = 2i-1.
  - Method 2 (use ho raha hai - nsp, nst variables):
      nsp = number of spaces, nst = number of stars.
      Har row ke baad nsp--, nst += 2.
      Ye tarika Diamond jaise mushkil patterns me kaam aata hai.

LOGIC (short notes):
  - Space "  " (2) aur star "* " (2) -> shape barabar.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // // Method 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){ // spaces
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=2*i-1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Method 2 (nsp,nst)
    int nsp = n-1, nst = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){ // spaces
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){ // stars
            cout<<"* ";
        }
        nsp--;
        nst += 2;
        cout<<endl;
    }
}
