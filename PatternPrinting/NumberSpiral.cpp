/*
QUESTION: Number Spiral / Concentric Pattern
  Example: n = 3
    1 1 1 1 1
    1 2 2 2 1
    1 2 3 2 1
    1 2 2 2 1
    1 1 1 1 1

YAAD RAKHO: (2n-1) x (2n-1) grid. i > n ho to a = 2n - i, j > n ho to b = 2n - j. Print min(a, b).

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me - 4 hisson me):
      upar ki n rows aur neeche ki n-1 rows alag loops me.
      Har row me left part j = 1..n aur right part j = n-1..1.
      Har jagah min(i, j) print.
  - Method 2 (use ho raha hai - ek hi grid):
      Poori (2n-1) x (2n-1) grid pe loop.
      Beech (n) ke baad row/column ko "mirror" kar do: a = 2n - i, b = 2n - j.
      Phir min(a, b) print.

LOGIC (short notes):
  - Har cell ki value = wo sabse paas wali boundary se kitni door hai (+1).
  - min(a, b) wahi distance deta hai.
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    // Method 2
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a = i, b = j;
            if(i>n) a = 2*n - i; // neeche wale half ko mirror
            if(j>n) b = 2*n - j; // right wale half ko mirror
            cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }

    // Method 1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<min(i,j)<<" ";
    //     }
    //     for(int j=n-1;j>=1;j--){
    //         cout<<min(i,j)<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=n-1;i>=1;i--){
    //     for(int j=1;j<=n;j++){
    //         cout<<min(i,j)<<" ";
    //     }
    //     for(int j=n-1;j>=1;j--){
    //         cout<<min(i,j)<<" ";
    //     }
    //     cout<<endl;
    // }
}
