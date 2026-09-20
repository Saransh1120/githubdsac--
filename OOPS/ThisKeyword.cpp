/*
TOPIC: this keyword
  Pokemon class ka constructor jisme parameter ke naam aur data members
  ke naam same hain (name, type, hp).

YAAD RAKHO: parameter aur member ka naam same ho to this->name = name; (this = current object ka pointer).

LOGIC (short notes):
  - Jab parameter aur member ka naam same ho, to function ke andar
    "name" likhne pe parameter hi milta hai (wo member ko chhupa deta hai).
  - this = pointer jo current object (jiske liye function call hua) ko
    point karta hai.
  - this->name = name;  matlab object ka name = parameter ka name.
  - this->name aur (*this).name same hain.
  - Bina this ke name = name; likhoge to parameter khud ko hi assign
    hoga, object ka name khaali reh jaayega.
*/
#include<iostream>
using namespace std;
class Pokemon{
public:
    string name;
    string type;
    int hp;
    Pokemon(string name, string type, int hp){
        this->name = name; // left: object ka, right: parameter
        this->type = type;
        this->hp = hp;
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main(){
    Pokemon p3("Mewtwo","Psychic",200);
    p3.print(); // Mewtwo Psychic 200

    Pokemon p1("Pikachu","Electric",70);
    Pokemon p2("Charizard","Fire",120);
}
