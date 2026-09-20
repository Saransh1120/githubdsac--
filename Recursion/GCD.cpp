/*
QUESTION: GCD / HCF of two numbers
  Do numbers a aur b ka HCF (sabse bada common divisor) nikaalo.
  Example: a = 12, b = 18 -> 6

YAAD RAKHO: Euclid: hcf(a, b) = hcf(b % a, a), a == 0 pe answer b.

METHODS:
  - Method 1 (comment me - Brute Force):
      min(a,b) se neeche 1 tak jao. Pehla i jo dono ko divide kare
      wahi HCF hai.  TIME: O(min(a,b))
  - Method 2 (use ho raha hai - Euclid's Algorithm, Recursion):
      hcf(a, b) = hcf(b % a, a)
      BASE CASE: a == 0 -> answer b
      TIME: O(log(min(a,b))) - bahut fast

LOGIC (Euclid ka idea):
  - Jo number a aur b dono ko divide karta hai, wo b % a ko bhi divide
    karega. To problem chhoti hoti jaati hai.
  - Example: hcf(12, 18) -> hcf(18 % 12, 12) = hcf(6, 12)
             -> hcf(12 % 6, 6) = hcf(0, 6) -> a = 0, answer 6
  - Agar a > b ho to bhi chalega: hcf(18, 12) -> hcf(12 % 18, 18)
    = hcf(12, 18), apne aap swap ho gaya.
*/
#include<iostream>
using namespace std;
// Method 1: Brute Force
// int hcf(int a, int b){
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i == 0 && b%i == 0) return i;
//     }
//     return 1;
// }

// Method 2: Euclid's Algorithm (recursion)
int hcf(int a, int b){
    if(a == 0) return b;   // base case
    return hcf(b%a, a);
}
int main(){
    int a,b;
    cout<<"Enter 2 Numbers: ";
    cin>>a>>b;
    cout<<hcf(a,b);
}
