/*
TOPIC: return keyword in void function

YAAD RAKHO: return; function ko wahin rok deta hai, neeche ka code nahi chalta.

LOGIC (short notes):
  - fun(27): 27 print, 27 > 20 -> return -> n*n print nahi hoga.
  - fun(5):  5 print, 5 > 20 nahi -> 25 bhi print.
  - void function me return; (bina value) likhte hain.
*/
#include<iostream>
using namespace std;
void fun(int n){
    cout<<n<<endl;
    if(n>20) return; // yahin ruk jao
    cout<<n*n<<endl;
}
int main(){
    fun(27); // sirf 27
}
