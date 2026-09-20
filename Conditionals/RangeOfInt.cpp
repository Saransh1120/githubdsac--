/*
TOPIC: Range of int

YAAD RAKHO: int = 4 bytes, range -2147483648 (INT_MIN) se 2147483647 (INT_MAX), yaani ~ ±2 x 10^9.

LOGIC (short notes):
  - 4 bytes = 32 bits -> -2^31 se 2^31 - 1.
  - INT_MAX + 1 karoge to overflow hoke negative ban jaata hai.
  - int y = 2147483649; -> range ke bahar, galat value (comment me).
  - Bade numbers ke liye long long -> LongLongDataType.cpp
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x = INT_MAX;
    cout<<x<<endl; // 2147483647
    // int y = 2147483649; // out of range
    // cout<<y<<endl;
    int z = INT_MIN;
    cout<<z<<endl; // -2147483648
}
