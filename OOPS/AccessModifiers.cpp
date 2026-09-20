/*
TOPIC: Access Modifiers (private / public) + Getters & Setters
  Cricketer class banao jiske data members private hon, aur unko
  sirf public functions (getter/setter) se access kiya ja sake.

YAAD RAKHO: private = sirf class ke andar; bahar se getter (padhna) aur setter (badalna) se access.

LOGIC (short notes):
  - private: sirf class ke andar ke functions access kar sakte hain.
    Bahar main() se c.runs likhoge to ERROR aayega.
  - public: kahin se bhi access ho sakta hai.
  - class me default access private hota hai (struct me default public).
  - Getter -> private value ko READ karne ke liye (getRuns()).
  - Setter -> private value ko CHANGE karne ke liye (setRuns()).
    Setter me hum checks laga sakte hain (jaise runs negative na ho).
  - Is idea ko Encapsulation / Data Hiding kehte hain.
  - (*this).name aur this->name dono same hain. this ek pointer hai jo
    current object ko point karta hai.
*/
#include<iostream>
using namespace std;
class Cricketer{
private: // bahar se access nahi ho sakta
    int runs;
    string name;
    float average;
public: // bahar se access ho sakta hai
    Cricketer(string name, int runs, float average){
        (*this).name = name;      // method 1: (*this).member
        this->runs = runs;        // method 2: this->member (zyada use hota hai)
        this->average = average;
    }
    void print(){ // getter (saari values print karta hai)
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
    int getRuns(){ // getter
        return runs;
    }
    void setRuns(int runs){ // setter
        this->runs = runs; // this->runs = object ka, runs = parameter
    }
};
int main(){
    Cricketer c("Virat Kohli",14000,58.1);
    // cout<<c.runs<<endl; // ERROR -> runs private hai
    cout<<c.getRuns()<<endl;  // 14000
    c.setRuns(15000);
    cout<<c.getRuns()<<endl;  // 15000
}
