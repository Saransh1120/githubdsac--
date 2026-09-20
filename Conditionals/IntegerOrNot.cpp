/*
QUESTION: Check if a Real Number is an Integer
  Example: 5.0 -> Integer,  5.3 -> Not an Integer

YAAD RAKHO: y = (int)x -> decimal kat jaata hai. x == y hai to decimal part 0 tha -> Integer.

LOGIC (short notes):
  - (int)5.3 = 5, aur 5.3 != 5 -> not integer.
  - (int)5.0 = 5, aur 5.0 == 5 -> integer.
  - Comparison me y wapas float ban jaata hai (implicit typecasting).
*/
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a Real No: ";
    cin>>x;
    int y = (int)x; // decimal part hata do
    if(x == y) cout<<"Integer";
    else cout<<"Not an Integer";
}
