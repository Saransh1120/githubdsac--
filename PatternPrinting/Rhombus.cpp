/*
QUESTION: Rhombus (Parallelogram)
  Example: n = 3
        * * *
      * * *
    * * *

YAAD RAKHO: row i: n-i spaces, phir hamesha n stars.

LOGIC (short notes):
  - Har row me stars same (n), sirf aage ke spaces kam hote jaate hain -> tircha shape.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ // spaces
            cout<<"  ";
        }
        for(int j=1;j<=n;j++){ // n stars
            cout<<"* ";
        }
        cout<<endl;
    }
}
