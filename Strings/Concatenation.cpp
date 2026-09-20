/*
TOPIC: String Concatenation (+ aur +=)

YAAD RAKHO: string + string ya string + char chalta hai. string + int (s + 4) ERROR. Number jodna hai to to_string(4) ya '4'.

LOGIC (short notes):
  - "111" + "222" = "111222" (jodna, add nahi).
  - s + 4   -> ERROR (int nahi jud sakta).
  - s + '4' -> "abc4",  '4' + s -> "4abc" (char chalta hai).
  - s4 += "Garg" -> "RaghavGarg" (end me jud gaya).
  - Dhyan: "abc" + "def" (dono string literal) direct nahi judte,
    kam se kam ek string variable hona chahiye.
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1 = "111";
    string s2 = "222";
    string s3 = s1+s2;
    cout<<s3<<endl; // 111222

    string s = "abc";
    // string x = s + 4; // error
    string x = s + '4';  // abc4
    string x2 = '4' + s; // 4abc
    cout<<x2<<endl;

    string s4 = "Raghav";
    s4 += "Garg"; // s4 = "Raghav" + "Garg"
    cout<<s4<<endl; // RaghavGarg
}
