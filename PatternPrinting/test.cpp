/*
TOPIC: Same naam ke local variables alag functions me (test file)

YAAD RAKHO: har function ke local variables alag hote hain; fun() ka x aur display() ka x ka koi lena dena nahi.

LOGIC (short notes):
  - fun() -> 5, display() -> 10.
  - Dono x apne apne function ke andar hi exist karte hain.
*/
#include <iostream>
using namespace std;

void fun() {
    int x = 5;
    cout << x << endl;
}

void display() {
    int x = 10;
    cout << x << endl;
}

int main() {
    fun();     // 5
    display(); // 10
}
