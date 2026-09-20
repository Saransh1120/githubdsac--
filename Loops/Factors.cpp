/*
QUESTION: Print all Factors of a Number
  Example: 36 -> 1 36 2 18 3 12 4 9 6

YAAD RAKHO: sirf sqrt(n) tak loop. i factor hai to n/i bhi factor hai (jodi me). i == n/i ho to ek hi baar print.

METHODS:
  - Method 1 (is file me nahi): i = 1 se n tak, n % i == 0 -> print. TIME: O(n)
  - Method 2 (is file me): i = 1 se sqrt(n) tak, jodi ke saath. TIME: O(sqrt(n))

LOGIC (short notes):
  - Factors jodi me aate hain: 36 = 1x36, 2x18, 3x12, 4x9, 6x6.
  - Har jodi ka chhota number sqrt(n) tak hota hai.
  - 6x6 me dono same -> 6 do baar print na ho, isliye i != n/i check.
  - Output sorted order me nahi hota.
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i == 0){ // factor mil gaya
            cout<<i<<" ";
            if(i != n/i) cout<<n/i<<" "; // jodi wala factor
        }
    }
}
