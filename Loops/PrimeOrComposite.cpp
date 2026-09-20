/*
QUESTION: Prime or Composite
  Example: 7 -> Prime, 12 -> Composite, 1 -> Neither

YAAD RAKHO: 2 se sqrt(n) tak koi bhi divide kare -> Composite. Koi nahi -> Prime. 1 dono nahi.

METHODS:
  - Method 1: 2 se n-1 tak check -> O(n)
  - Method 2 (is file me): 2 se sqrt(n) tak (i*i <= n) -> O(sqrt(n))

LOGIC (short notes):
  - Agar n ka koi factor hai to ek factor sqrt(n) se chhota ya barabar zaroor hoga.
  - i*i <= n likha, sqrt(n) nahi -> float ki jhanjhat nahi.
  - flag = true matlab factor mil gaya (composite). Mila -> break.
  - n == 1 alag se handle.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = false; // false means prime
    for(int i=2;i*i<=n;i++){
        if(n%i == 0){ // factor mil gaya except 1 and n
            flag = true;
            break;
        }
    }
    if(n==1) cout<<"Neither Prime nor composite";
    else if(flag==true) cout<<"Composite Number";
    else cout<<"Prime Number";
}
