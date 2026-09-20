/*
QUESTION: Diamond Pattern
  Example: n = 3 (Method 1 - bhara hua)      Method 2 (khokhla / hollow)
        *                                        *
      * * *                                    *   *
    * * * * *                                *       *
      * * *                                    *   *
        *                                        *

YAAD RAKHO: nsp (spaces) aur nst (stars) variables. Upar: nsp--, nst += 2. Beech ke baad: nsp++, nst -= 2.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me - do alag loops):
      Upper pyramid: n rows, nsp = n-1, nst = 1, har row nsp--, nst += 2.
      Lower inverted pyramid: n-1 rows, nsp = 1, nst = 2n-3, har row nsp++, nst -= 2.
      -> Bhara hua (filled) diamond.
  - Method 2 (use ho raha hai - ek hi loop, 2n-1 rows):
      i < n tak badhao (nsp--, nst += 2), uske baad ghatao (nsp++, nst -= 2).
      Stars wale loop me sirf pehla (j == 1) aur last (j == nst) star,
      beech me space -> HOLLOW diamond.

LOGIC (short notes):
  - Space "  " aur star "* " dono 2 characters, taaki shape sahi bane.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // Method 2
    int nsp = n-1, nst = 1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){ // spaces
            cout<<"  ";
        }
        for(int j=1;j<=nst;j++){ // stars
            if(j==1 || j==nst) cout<<"* "; // sirf boundary pe star
            else cout<<"  ";
        }
        if(i<n){ // upar wala half
            nsp--;
            nst += 2;
        }
        else{ // neeche wala half
            nsp++;
            nst -= 2;
        }
        cout<<endl;
    }


    // Method 1
    // // Upper Pyramid
    // int nsp = n-1, nst = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=nsp;j++){ // spaces
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=nst;j++){ // stars
    //         cout<<"* ";
    //     }
    //     nsp--;
    //     nst += 2;
    //     cout<<endl;
    // }
    // // Lower Inverted Pyramid
    // nsp = 1;
    // nst = 2*n-3;
    // for(int i=1;i<=n-1;i++){
    //     for(int j=1;j<=nsp;j++){ // spaces
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=nst;j++){ // stars
    //         cout<<"* ";
    //     }
    //     nsp++;
    //     nst -= 2;
    //     cout<<endl;
    // }
}
