/*
TOPIC: short Data Type

YAAD RAKHO: short = 2 bytes, range -32768 se 32767.

LOGIC (short notes):
  - 2 bytes = 16 bits -> -2^15 se 2^15 - 1.
  - INT16_MIN = -32768, INT16_MAX = 32767.
  - Size order: char (1) < short (2) < int (4) < long long (8) bytes.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    short x = INT16_MIN, y = INT16_MAX;
    cout<<x<<endl; // -32768
    cout<<y<<endl; // 32767
}
