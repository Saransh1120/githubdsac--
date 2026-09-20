/*
TOPIC: Class & Object ki basics - Car class
  Car naam ka apna data type banao jisme name, power, mileage aur
  isE20Compatible ho. Uske objects banao aur print karo.

YAAD RAKHO: class = blueprint, object = asli variable. Members dot (.) se; Car c2 = {..} se ek line me bhi bana sakte ho.

METHODS (object banane / print karne ke alag tarike):
  - Object banana method 1: Car c1; phir har member alag se set karo.
  - Object banana method 2: Car c2 = {"Toyota Fortuner",200,7.6,false};
    (brace initialisation - order wahi hona chahiye jo class me hai,
     aur ye tabhi chalta hai jab koi constructor na ho aur sab public ho)
  - Print method 1: class ke andar ka function -> c1.print();
  - Print method 2: bahar ka normal function -> print(c1);

LOGIC (short notes):
  - class = blueprint / user defined data type. object = us blueprint
    se bana hua real variable.
  - Members ko dot (.) operator se access karte hain: c1.name
  - bool ko cout karoge to true -> 1, false -> 0 print hota hai.
  - Bahar wale print(Car x) me object ki COPY jaati hai (pass by value).
*/
#include<iostream>
using namespace std;
class Car{ // User Defined Data Type
public:
    string name;
    int power;
    float mileage;
    bool isE20Compatible;
    void print(){ // member function - apne object ka data print karta hai
        cout<<name<<" "<<power<<" "<<mileage<<" "<<isE20Compatible<<endl;
    }
};

// bahar ka function - object ko parameter me leta hai
void print(Car x){
    cout<<x.name<<" "<<x.power<<" "<<x.mileage<<" "<<x.isE20Compatible<<endl;
}

int main(){
    // method 1: pehle object, phir ek ek member set
    Car c1;
    c1.isE20Compatible = true;
    c1.name = "Kia Sonet";
    c1.power = 118;
    c1.mileage = 9.2;

    // method 2: ek hi line me saare members (class ke order me)
    Car c2 = {"Toyota Fortuner",200,7.6,false};

    c1.print(); // member function se
    print(c1);  // bahar wale function se -> dono same output
}
