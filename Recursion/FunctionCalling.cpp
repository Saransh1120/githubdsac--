/*
TOPIC: Function Calling (ek function doosre ko call kare)
  Recursion se pehle ye samjho ki function calls ka order kaise chalta hai.

YAAD RAKHO: function call pe wahin jump, poora chalao, phir wapas wahin jahan se call hua (call stack).

LOGIC (short notes):
  - Jab ek function doosre ko call karta hai, to pehla function wahin
    ruk jaata hai, doosra poora khatam hota hai, phir pehla wahin se
    aage chalta hai. (Call stack)
  - main() -> kartik() -> aryan(), "Kartik", param() -> (aryan, "Param", aryan)
    phir param() -> (aryan, "Param", aryan)
    phir aryan()
  - Output ka order (first letter): a k a p a a p a a
*/
#include<iostream>
using namespace std;
void aryan(){
    cout<<"Aryan"<<endl;
}
void param(){
    aryan();
    cout<<"Param"<<endl;
    aryan();
}
void kartik(){
    aryan();
    cout<<"Kartik"<<endl;
    param();
}
int main(){
    kartik();
    param();
    aryan();
} // a k a p a a p a a
