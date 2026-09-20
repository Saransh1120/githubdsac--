/*
TOPIC: double vs float

YAAD RAKHO: float = 4 bytes (~7 digits sahi), double = 8 bytes (~15 digits sahi). Precision chahiye to double.

LOGIC (short notes):
  - Dono me same value 3.14124352345436 daali.
  - cout by default sirf 6 significant digits dikhata hai, isliye dono
    3.14124 dikhenge.
  - Poora farak dekhna ho to #include<iomanip> aur
    cout<<setprecision(15)<<x; -> double zyada digits sahi dikhayega,
    float ke baad ke digits galat honge.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    double x = 3.14124352345436;
    float y = 3.14124352345436;
    cout<<x<<endl; // 3.14124
    cout<<y<<endl; // 3.14124
}
