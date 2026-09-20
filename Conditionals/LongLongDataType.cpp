/*
TOPIC: long long Data Type

YAAD RAKHO: long long = 8 bytes, range ~ -9 x 10^18 se +9 x 10^18. int (~2 x 10^9) se bada number ho to long long.

LOGIC (short notes):
  - LLONG_MAX = 9223372036854775807
  - LLONG_MIN = -9223372036854775808
  - Dono <climits> me hain.
  - Factorial, bade products, sums me overflow se bachne ke liye use karo.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    long long x = LLONG_MAX, y = LLONG_MIN;
    cout<<x<<endl; // 9223372036854775807
    cout<<y<<endl; // -9223372036854775808
}
