/*
QUESTION: Sum of Digits
  Example: 1234 -> 10

YAAD RAKHO: sum += n%10;  n /= 10;  jab tak n != 0.

LOGIC (short notes):
  - n % 10 -> last digit nikaalo, sum me jodo.
  - n / 10 -> last digit hata do.
  - Yahi pattern CountDigits aur ReverseNumber me bhi hai.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    while(n != 0){
        int lastDigit = n%10;
        sum += lastDigit;
        n /= 10;
    }
    cout<<sum;
}
