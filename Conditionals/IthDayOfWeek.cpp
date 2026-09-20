/*
QUESTION: i-th Day of the Week
  1 -> Monday, 2 -> Tuesday ... 7 -> Sunday, baaki -> Invalid day

YAAD RAKHO: switch(n) { case 1: ...; break; ... default: ... }. break bhoole to neeche wale cases bhi chal jaayenge.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me): if - else if ladder.
  - Method 2 (use ho raha hai): switch case.

LOGIC (short notes):
  - switch tab achha hai jab ek variable ko fixed values se compare karna ho.
  - break -> switch se bahar. Nahi likha to "fall through" -> agle case bhi print.
  - default -> koi case match nahi hua (jaise else).
  - switch me sirf int/char chalta hai, float/string nahi.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Method 1: else if
    // if(n==1) cout<<"Monday";
    // else if(n==2) cout<<"Tuesday";
    // else if(n==3) cout<<"Wednesday";
    // else if(n==4) cout<<"Thursday";
    // else if(n==5) cout<<"Friday";
    // else if(n==6) cout<<"Saturday";
    // else if(n==7) cout<<"Sunday";
    // else cout<<"Invalid day";

    // Method 2: switch
    switch(n){
        case 1: cout<<"Monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"Wednesday"; break;
        case 4: cout<<"Thursday"; break;
        case 5: cout<<"Friday"; break;
        case 6: cout<<"Saturday"; break;
        case 7: cout<<"Sunday"; break;
        default: cout<<"Invalid day";
    }
}
