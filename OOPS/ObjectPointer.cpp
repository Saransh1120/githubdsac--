/*
TOPIC: Object Pointer (pointer jo object ko point kare)

YAAD RAKHO: Cricketer* p = &c1 ya new Cricketer(..). Member access: p->x == (*p).x.

METHODS (object pointer banane ke do tarike):
  - Method 1: Cricketer* p = new Cricketer(...);
    -> object heap pe banta hai, p uska address rakhta hai.
       (kaam khatam hone pe delete p; karna chahiye)
  - Method 2: Cricketer* ptr = &c1;
    -> pehle se bane object (stack pe) ka address.

LOGIC (short notes):
  - Pointer se member access karne ke do tarike:
      ptr->average     (arrow operator - short, zyada use hota hai)
      (*ptr).average   (pehle dereference, phir dot)
    Dono bilkul same hain. Bracket zaroori hai kyunki . ki priority * se zyada hai.
  - ptr->average = 74.2 karne se c1.average bhi change hoga, kyunki ptr
    c1 ko hi point kar raha hai (copy nahi hai).
  - Last me: int x = 10 -> stack pe variable
             int* y = new int(10) -> heap pe int, y uska address.
*/
#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float average;
    Cricketer(string name, int runs, float average){
        (*this).name = name;
        this->runs = runs;
        this->average = average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
};
int main(){
    Cricketer c1("Virat Kohli",14000,58.1);
    Cricketer c2("Sachin Tendulkar Sir",18000,46.7);
    Cricketer c3("Rohit Sharma",11000,49.4);

    // method 1: heap pe object
    Cricketer* p = new Cricketer("ABD",10000,55.2); // Object Pointer
    p->print();

    // method 2: existing object ka address
    Cricketer* ptr = &c1; // Object Pointer
    ptr->average = 74.2; // (*ptr).average = 74.2;
    cout<<c1.average<<endl; // 74.2 -> c1 hi change hua
    cout<<ptr->name<<endl;
    cout<<ptr->runs<<endl;

    // same cheez normal int ke saath:
    // int x = 10;
    // int* ptr = &x;
    // *ptr = 20;
    // cout<<x<<endl;

    int x = 10;          // stack
    int* y = new int(10); // heap
}
