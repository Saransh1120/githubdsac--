/*
TOPIC: Nested Scope Shadowing

YAAD RAKHO: andar ke { } me naya x banaya to wo ALAG variable hai; block khatam, wo khatam. Bahar wala x same rehta hai.

LOGIC (short notes):
  - Bahar x = 6.
  - Andar ke block me int x = 8 -> naya x (bahar wale ko chhupa diya).
  - Block ke baad cout<<x -> 6.
  - Agar andar "int" na likhte (sirf x = 8), to bahar wala hi 8 ho jaata.
*/
#include<iostream>
using namespace std;
int main(){
    int x = 6;
    {
        int x = 8; // naya variable, sirf is block me
    }
    cout<<x; // 6
}
