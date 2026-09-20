/*
QUESTION: Fraction Class
  Fraction (num/den) ke liye class banao jisme print, add, multiply ho,
  aur har baar answer simplest form me rahe.
  Example: 2/5 + 3/5 = 25/25 -> simplify -> 1/1
           6/8 -> simplify -> 3/4

YAAD RAKHO: add: (ad + bc)/bd, multiply: ac/bd, har baar gcd se simplify.

METHODS (multiply ke do tarike):
  - Method 1 (use ho raha hai): member function f1.multiply(f2)
    -> f1 khud change ho jaata hai.
  - Method 2 (comment me hai): bahar ka function multiply(f1, f2)
    -> naya Fraction return karta hai, f1 aur f2 same rehte hain.
    Ye abhi chalega nahi, kyunki Fraction res; ke liye default
    constructor chahiye jo class me nahi hai.

LOGIC (short notes):
  - multiply: (a/b) * (c/d) = (a*c) / (b*d)
  - add:      (a/b) + (c/d) = (a*d + b*c) / (b*d)
  - simplify: num aur den dono ko unke HCF (gcd) se divide kar do.
  - gcd Euclid method se (recursion): gcd(a, b) = gcd(b % a, a),
    jab a == 0 ho jaaye to answer b.
  - Constructor me bhi simplify() call kiya hai, isliye 6/8 banate hi
    3/4 ban jaata hai.
  - Last me comment: x *= y matlab x = x * y.
*/
#include<iostream>
using namespace std;
class Fraction{
public:
    int num; // numerator (upar wala)
    int den; // denominator (neeche wala)
    Fraction(int num, int den){
        this->den = den;
        this->num = num;
        simplify(); // bante hi simplest form me
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    void multiply(Fraction f){ // (a*c)/(b*d)
        num = num * f.num;
        den = den * f.den;
        simplify();
    }
    void add(Fraction f){ // (a*d + b*c)/(b*d)
        num = num * f.den + den * f.num;
        den = den * f.den;
        simplify();
    }
    void simplify(){
        int hcf = gcd(num,den);
        num /= hcf;
        den /= hcf;
    }
    int gcd(int a, int b){ // Euclid's algorithm
        if(a == 0) return b;
        return gcd(b%a, a);
    }
};

// Method 2: bahar ka function, naya fraction return karta hai
// Fraction multiply(Fraction& f1, Fraction& f2){
//     Fraction res;
//     res.num = f1.num * f2.num;
//     res.den = f1.den * f2.den;
//     return res;
// }

int main(){
    Fraction f1(2,5);
    Fraction f2(3,5);
    f1.print();   // 2/5
    f1.add(f2);
    f1.print();   // 1/1

    Fraction f3(6,8);
    f3.print();   // 3/4

    // int x = 10;
    // int y = 20;
    // x *= y; // x = 200 y = 20
}
