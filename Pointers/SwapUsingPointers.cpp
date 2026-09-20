/*
QUESTION: Swap Two Numbers using Pointers
  Example: a = 5, b = 2 -> 2 5

YAAD RAKHO: swap(&a, &b); andar temp = *p1; *p1 = *p2; *p2 = temp;

METHODS:
  - Pointers (is file me).
  - Reference (Functions/Swap2NumbersFunction.cpp).
  - Built-in swap(a, b).
*/
#include<iostream>
using namespace std;
void swap(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    int a = 5, b = 2;
    swap(&a,&b); // address bheje
    cout<<a<<" "<<b<<endl; // 2 5
}
