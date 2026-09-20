/*
TOPIC: String Input - cin vs getline

YAAD RAKHO: cin>>s sirf pehla word leta hai (space pe ruk jaata hai). Poori line chahiye to getline(cin, s).

METHODS:
  - Method 1 (comment me): cin>>s -> "Raghav Garg" daaloge to sirf "Raghav".
  - Method 2 (use ho raha hai): getline(cin, s) -> poori line "Raghav Garg".

NOTE: cin>>n ke baad getline use karo to pehle cin.ignore(); lagao,
      warna bacha hua Enter getline kha jaata hai aur khaali string milti hai.
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    // cin>>s;
    getline(cin,s);
    cout<<s;
}
