/*
TOPIC: Typecasting (char <-> int, ASCII)

YAAD RAKHO: (int)ch -> ASCII number; (char)num -> character. 'A' = 65, 'a' = 97.

METHODS / CASES (sir ne 5 cases dikhaye):
  1. Explicit typecasting: (int)'@' -> 64  (khud bracket me type likha)
  2. Implicit typecasting: int ascii = 'Z'; -> 90 (apne aap convert)
  3. int -> char: (char)74 -> 'J'
  4. 'A' + 'a' -> 65 + 97 = 162 (char + char = int ban jaata hai)
  5. (char)('a' + 1) -> 97 + 1 = 98 -> 'b'   (use ho raha hai)

LOGIC (short notes):
  - char andar se ek chhota number (ASCII) hai.
  - Maths karne pe char int ban jaata hai. Wapas letter chahiye to (char) lagao.
  - Trick: agla letter = ch + 1, lowercase -> uppercase = ch - 32.
*/
#include <iostream>
using namespace std;
int main(){
    // char x = '@';
    // int ascii = (int)x; // explicit typecasting
    // cout<<ascii;

    // char x = 'Z';
    // int ascii = x; // implicit typecasting
    // cout<<ascii;

    // int x = 74;
    // cout<<(char)x;

    // char ch1 = 'A';
    // char ch2 = 'a';
    // cout<<ch1+ch2<<endl;

    cout<<(char)('a'+1); // b

}
