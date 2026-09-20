/*
TOPIC: Function Overloading (Case 3 - ambiguous call)

YAAD RAKHO: agar do functions "barabar" match karein (dono me conversion lage), to compiler confuse -> ERROR (ambiguous).

LOGIC (short notes):
  - fun(int, char) aur fun(char, int) dono hain.
  - fun(34, 97) -> dono int hain.
      pehle function ke liye 97 ko char banana padega,
      doosre ke liye 34 ko char banana padega.
    Dono me ek ek conversion -> koi better nahi -> ERROR.
  - fun(34, 'a') -> pehla exact match -> "Sahib". Ye chalega.
  - Comment wale (int, float) / (float, int) me bhi yahi problem.
*/
#include<iostream>
using namespace std;
// void fun(int x, float y){
//     cout<<"Sahib"<<endl;
// }
// void fun(float y, int x){
//     cout<<"Dhruv"<<endl;
// }
void fun(int x, char y){
    cout<<"Sahib"<<endl;
}
void fun(char y, int x){
    cout<<"Dhruv"<<endl;
}
int main(){
    // fun(34,97); ERROR (ambiguous)
}
