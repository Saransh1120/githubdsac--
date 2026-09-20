/*
QUESTION: Valid Age for Driving
  Example: 20 -> You can DRIVE ...,  15 -> You cannot drive

YAAD RAKHO: if me ek se zyada lines hon to { } braces zaroori hain.

LOGIC (short notes):
  - age >= 18 -> do lines print, isliye { }.
  - Bina braces ke sirf pehli line if ke andar maani jaati hai.
  - else me ek line hai, to braces optional.
*/
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age >= 18){
        cout<<"You can DRIVE"<<endl;
        cout<<"But you need a driving liscence";
    }
    else cout<<"You cannot drive";
}
