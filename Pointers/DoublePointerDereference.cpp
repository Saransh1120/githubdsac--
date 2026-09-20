/*
TOPIC: Double Pointer Dereference

YAAD RAKHO: x == *p1 == **p2 (value 10).  &x == p1 == *p2 (address).

LOGIC (short notes):
  - *p1  -> x ki value.
  - *p2  -> p1 ki value = x ka address.
  - **p2 -> us address pe value = x = 10.
  - Jitne * lagao, utni baar "andar" jaate ho.
*/
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p1 = &x;
    int** p2 = &p1;

    // teeno 10
    cout<<x<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    // teeno x ka address
    cout<<&x<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;
}
