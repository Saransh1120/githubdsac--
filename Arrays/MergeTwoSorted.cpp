/*
QUESTION: Merge Two Sorted Arrays (normal array version)
  Example: a = {10,20,40,70,90,100}, b = {30,50,60,80}
           -> 10 20 30 40 50 60 70 80 90 100

YAAD RAKHO: i -> a, j -> b, k -> c. Chhota wala c me daalo; last me bache hue copy.

LOGIC (short notes):
  - Dono sorted hain, to a[i] aur b[j] me jo chhota hai wahi agla.
  - c[k++] = a[i++] -> pehle c[k] = a[i], phir k aur i dono +1.
  - Ek array khatam hone ke baad doosre ke bache hue seedha copy.
  - Vector wala version aur Merge Sort -> Advanced_Sorting_Algos folder.

TIME: O(m+n)    SPACE: O(m+n)
*/
#include<iostream>
using namespace std;
int main(){
    int a[] = {10,20,40,70,90,100};
    int b[] = {30,50,60,80};
    int m = sizeof(a)/4, n = sizeof(b)/4;
    int c[m+n];
    int i = 0, j = 0, k = 0; // i -> a, j -> b, k -> c
    while(i<m && j<n){
        if(a[i] < b[j])
            c[k++] = a[i++];
        else // b[j] < a[i]
            c[k++] = b[j++];
    }
    while(j<n) // b ke bache hue
        c[k++] = b[j++];
    while(i<m) // a ke bache hue
        c[k++] = a[i++];
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}
