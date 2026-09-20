/*
QUESTION: Divisible by 5 OR 3
  Example: 9 -> Divisible,  10 -> Divisible,  7 -> Condition not met

YAAD RAKHO: n % 5 == 0 || n % 3 == 0. || (OR) -> koi ek bhi sach to sach.

LOGIC (short notes):
  - n % k == 0 matlab n, k se poora divide hota hai.
  - || (OR): ek bhi condition true -> true.
  - && (AND): dono true hon tabhi true.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%5 == 0 || n%3 == 0) cout<<"Divisible by 5 or 3";
    else cout<<"Condition not met";

}
