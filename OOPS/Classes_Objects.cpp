/*
TOPIC: Constructors + Constructor Overloading
  Student class banao aur alag alag tarike se objects banao
  (alag parameters ke saath).

YAAD RAKHO: constructor = object bante hi chalta hai (naam class jaisa, return type nahi). Alag parameters = constructor overloading.

METHODS (sir ne 4 alag constructors banaye hain):
  1. Student(string n, float c, int r)  -> name, cgpa, rno
  2. Student(int r, float c, string n)  -> rno, cgpa, name (order ulta)
  3. Student(string n, int r)           -> sirf name aur rno
  4. Student()                          -> Default constructor (kuch nahi)

LOGIC (short notes):
  - Constructor = special function jo object bante hi apne aap chalta hai.
    Naam class jaisa hota hai aur koi return type nahi hota.
  - Parameterised constructor -> object banate time values de do.
  - Constructor Overloading -> same naam ke kai constructors, bas
    parameters ka number / type / order alag. Compiler khud decide karta
    hai kaunsa call hoga (arguments dekh ke).
  - Agar tum koi bhi constructor khud likhte ho, to compiler default
    constructor nahi deta. Isliye Student alpha; ke liye Student(){}
    khud likhna pada.
  - Student z("Ikram",42) me cgpa set nahi hua -> garbage value hogi.
*/
#include<iostream>
using namespace std;
class Student{ // User Defined Data Type
public:
    string name;
    int rno;
    float cgpa;
    // Constructor Overloading
    Student(string n, float c, int r){ // Parameterised Constructor (string, float, int)
        rno = r;
        name = n;
        cgpa = c;
    }
    Student(int r, float c, string n){ // Parameterised Constructor (int, float, string)
        rno = r;
        name = n;
        cgpa = c;
    }
    Student(string n, int r){ // Parameterised Constructor (sirf name, rno)
        rno = r;
        name = n;
        // cgpa set nahi kiya -> garbage
    }
    Student(){ // Default Constructor (bina parameter wala)

    }
};
int main(){
    Student x("Sumit",8.7,39);    // constructor 1 call
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<endl;

    Student y(1049,9.75,"Manish"); // constructor 2 call

    Student z("Ikram",42);        // constructor 3 call

    Student alpha;                // constructor 4 (default) call
}
