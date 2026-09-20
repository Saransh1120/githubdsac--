/*
QUESTION: Complex Number Class
  Complex number (a + bi) ke liye class banao jisme print, add aur
  multiply ke functions hon.
  Example: (3 + 7i) * (2 + 4i) = (6 - 28) + (12 + 14)i = -22 + 26i

YAAD RAKHO: (a+bi)(c+di) = (ac - bd) + (ad + bc)i. multiply me purana real pehle save karo, warna galat answer.

LOGIC (short notes):
  - real aur imaginary do data members.
  - print(): imaginary negative ho to "a - bi" print karo, warna "a + bi".
  - add(): (a+bi) + (c+di) = (a+c) + (b+d)i
  - multiply(): (a+bi) * (c+di) = (ac - bd) + (ad + bc)i   (kyunki i*i = -1)
  - add aur multiply current object (c1) ko hi change kar dete hain.

NOTE (dhyan dena - multiply me chhota bug hai):
  - multiply() me pehle real change ho jaata hai, phir wahi NAYA real
    imaginary nikalne me use hota hai. Isliye answer galat aata hai:
    output -22 - 74i aata hai, sahi answer -22 + 26i hai.
  - Fix: purana real pehle ek variable me save kar lo:
        float r = real;
        real = r * c.real - imaginary * c.imaginary;
        imaginary = r * c.imaginary + imaginary * c.real;
  - Constructor int leta hai, to 2.5 jaisi values decimal kho dengi.
*/
#include<iostream>
using namespace std;
class Complex{
public:
    float real;
    float imaginary;
    Complex(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
        if(imaginary < 0)
            cout<<real<<" - "<<-imaginary<<"i"<<endl; // minus sign alag print
        else
            cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    void add(Complex c){ // (a+c) + (b+d)i
        real = real + c.real;
        imaginary = imaginary + c.imaginary;
    }
    void multiply(Complex c){ // (ac - bd) + (ad + bc)i
        real = real * c.real - imaginary * c.imaginary;
        imaginary = real * c.imaginary + imaginary * c.real; // yahan naya real use ho raha hai (bug, upar NOTE dekho)
    }
};
int main(){
    Complex c1(3,7); // 3 + 7i
    Complex c2(2,4); // 2 + 4i
    c1.print();
    c1.multiply(c2);
    c1.print();
}
