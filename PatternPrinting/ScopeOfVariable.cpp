/*
TOPIC: Scope of Loop Variable

YAAD RAKHO: for(int i=...) me bana i sirf loop ke andar hai. Loop ke baad cout<<i -> ERROR.

LOGIC (short notes):
  - Loop ke baad bhi i chahiye to i ko loop ke bahar declare karo:
    int i; for(i=1; i<=4; i++) ...  (Functions/BlockScope.cpp)
*/
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        cout<<"Good Morning"<<endl;
    }
    // cout<<i; // error
}
