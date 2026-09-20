/*
TOPIC: Basic Function + ek function se doosra call

YAAD RAKHO: function call hone pe wahin jump karta hai, poora chalta hai, phir wapas wahin aata hai jahan se call hua tha.

LOGIC (dry run):
  - main -> anu(): "Hi Anu", phir arjun()
  - arjun(): pehle sumit() -> "Hi Sumit", phir "Hi Arjun"
  - Output:
      Hi Anu
      Hi Sumit
      Hi Arjun
  - Function ko call karne se pehle define (ya declare) karna padta hai,
    isliye sumit upar, anu neeche.
*/
#include <iostream>
using namespace std;
void sumit(){
    cout<<"Hi Sumit"<<endl;
}
void arjun(){
    sumit();
    cout<<"Hi Arjun"<<endl;
}
void anu(){
    cout<<"Hi Anu"<<endl;
    arjun();
}
int main(){
    anu();
}
