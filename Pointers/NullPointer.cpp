/*
TOPIC: NULL Pointer

YAAD RAKHO: int* ptr = NULL; -> pointer kisi ko point nahi karta (address 0). *ptr karoge to crash.

LOGIC (short notes):
  - Pointer ko khaali chhodoge to usme garbage address hoga (dangerous).
    Isliye NULL (ya C++ me nullptr) se start karo.
  - cout<<ptr -> 0 print hota hai.
  - Use karne se pehle check: if(ptr != NULL).
*/
#include<iostream>
using namespace std;
int main(){
    int* ptr = NULL; // OxO
    cout<<ptr<<endl; // 0
}
