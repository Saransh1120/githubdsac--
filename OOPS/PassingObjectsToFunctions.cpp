/*
TOPIC: Passing Objects to Functions (by value vs by reference)

YAAD RAKHO: Student& s -> original object change hota hai; bina & -> sirf copy change hoti hai.

METHODS:
  - Pass by reference (is file me): void change(Student& s)
    -> original object hi function me jaata hai. Change karoge to
       main() wala x bhi change hoga. Output: Akash 39 8.7
  - Pass by value (agar & hata do): void change(Student s)
    -> object ki COPY jaati hai. Copy change hogi, original x same
       rahega. Output: Sumit 39 8.7

LOGIC (short notes):
  - & lagane se copy nahi banti, isliye bade objects ke liye fast bhi hai.
  - Agar change nahi karna aur copy bhi nahi chahiye to const Student& s lo.
*/
#include<iostream>
using namespace std;
class Student{ // User Defined Data Type
public:
    string name;
    int rno;
    float cgpa;
    Student(string n, float c, int r){ // Parameterised Constructor
        rno = r;
        name = n;
        cgpa = c;
    }
    void print(){
        cout<<name<<" "<<rno<<" "<<cgpa<<endl;
    }
};

void change(Student& s){ // & -> reference, original object aayega
    s.name = "Akash";
}

int main(){
    Student x("Sumit",8.7,39);
    change(x);
    x.print(); // Akash 39 8.7

}
