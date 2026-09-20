/*
QUESTION: Pow(x, n) (LeetCode 50)
  a^b nikaalo, jahan a double hai aur b negative bhi ho sakta hai.
  Example: 2.0^10 = 1024.0,  2.0^-2 = 0.25

YAAD RAKHO: p = power(a, b/2) EK baar; even -> p*p, odd -> p*p*a. Negative b -> 1/ans. b ko long long me lo.

METHODS:
  - Method 1 (Power.cpp): a^b = a * a^(b-1) -> O(b). Yahan b 2^31 tak
    ho sakta hai, to TLE aayega.
  - Method 2 (is file me - Fast Power / Binary Exponentiation):
      a^b = (a^(b/2)) * (a^(b/2))       agar b even
      a^b = (a^(b/2)) * (a^(b/2)) * a   agar b odd
      -> O(log b)

LOGIC (short notes):
  - p = power(a, b/2) sirf EK baar calculate karo aur p*p karo.
    (power(a,b/2) * power(a,b/2) likhoge to phir se O(b) ho jaayega.)
  - Negative b: pehle a^|b| nikaalo, phir 1/ans kar do.
    (2^-2 = 1 / 2^2 = 1/4)
  - long long b2 kyun? b = -2147483648 (INT_MIN) ho to abs(b) int me
    fit nahi hota (max 2147483647). Isliye pehle long long me daala.
  - flag = true matlab b positive (ya 0) hai.

TIME: O(log b)    SPACE: O(log b) stack
NOTE: Sirf class hai (LeetCode ke liye), main() nahi hai.
*/
class Solution {
public:
    double power(double a, long long b) {
        if(b==0) return 1; // a^0 = 1
        double p = power(a,b/2); // aadhi power sirf ek baar
        return (b%2 == 0) ? p * p : p * p * a; // even -> p*p, odd -> p*p*a
    }

    double myPow(double a, int b) {
        bool flag = (b >= 0); // flag is true is b is positive
        long long b2 = b; // INT_MIN ke overflow se bachne ke liye
        double ans = power(a,abs(b2));
        if(flag==false) ans = 1/ans; // negative power -> ulta
        return ans;
    }
};
