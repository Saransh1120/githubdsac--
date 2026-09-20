/*
QUESTION: Make Your Own Vector
  vector<int> jaisa apna data structure (MyVector) banao jisme
  size(), capacity(), push_back(), pop_back(), get(), set(), print() ho.

YAAD RAKHO: andar dynamic array. Full hone pe capacity DOUBLE karo, copy karo, purana delete[]. pop_back = length--.

LOGIC (short notes):
  - Andar ek dynamic array (int* arr = new int[cap]) hai.
  - length = kitne elements abhi bhare hain (size).
    cap    = array me kitni jagah hai (capacity).
  - pop_back(): sirf length-- kar do. Element delete nahi hota, bas
    use "bahar" maan lete hain.
  - push_back():
      agar jagah hai -> arr[length++] = val
      agar array FULL hai (length == cap):
        1. double capacity ka naya array banao
        2. purane saare elements copy karo
        3. purana array delete[] karo (memory free)
        4. arr ko naye array pe point karwa do
      Real vector bhi aise hi double karta hai. Isliye push_back
      average O(1) hota hai (amortized).
  - get/set me index check hai: idx < 0 ya idx >= length -> out of bound.

TIME: get/set/pop_back O(1), push_back average O(1) (full hone pe O(n))

NOTE:
  - Destructor nahi hai (~MyVector(){ delete[] arr; }), to program ke
    end me memory free nahi hoti.
  - Agar capacity 0 do, to 2*0 = 0 hi rahega aur push_back crash karega.
*/
#include<iostream>
using namespace std;
class MyVector{ // User Defined Data Structure
private:
    int length; // kitne elements hai vector me
    int* arr;   // heap pe bana array
    int cap;    // array me total kitni jagah hai
public:
    MyVector(int capacity, int default_value){ // vector<int> v(n, x) jaisa
        cap = capacity;
        length = capacity;
        arr = new int[capacity];
        for(int i=0;i<capacity;i++){
            arr[i] = default_value;
        }
    }
    int size(){
        return length;
    }
    int capacity(){
        return cap;
    }
    void pop_back(){
        if(length == 0){
            cout<<"Vector is Empty!"<<endl;
            return;
        }
        length--; // last element ko ignore kar do
    }
    void push_back(int val){
        if(length == cap){ // array is FULL
            // double the capacity & copy paste
            cap = 2*cap;
            int* temp = new int[cap];
            for(int i=0;i<length;i++){
                temp[i] = arr[i];
            }
            delete[] arr; // purani memory free
            arr = temp;   // ab arr naye bade array ko point karta hai
        }
        arr[length++] = val;
    }
    int get(int idx){ // v[idx] padhna
        if(idx < 0 || idx>=length){
            cout<<"Index out of bound"<<endl;
            return -1;
        }
        return arr[idx];
    }
    void set(int idx, int val){ // v[idx] = val
        if(idx < 0 || idx>=length){
            cout<<"Index out of bound"<<endl;
            return;
        }
        arr[idx] = val;
    }
    void print(){
        for(int i=0;i<length;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MyVector v(5,-1); // vector<int> v(5,-1);
    v.print();        // -1 -1 -1 -1 -1
    v.pop_back();
    v.print();        // -1 -1 -1 -1
    v.push_back(10);
    v.print();        // -1 -1 -1 -1 10
    v.push_back(20);  // full tha -> capacity 5 se 10
    v.print();        // -1 -1 -1 -1 10 20

    cout<<v.get(5)<<endl; // 20
    v.set(2,120);
    v.print();

    // array ka naam bhi pointer ki tarah kaam karta hai:
    // int b[] = {67,21,8,2};
    // int* arr = b;
    // cout<<arr[0]<<endl;
}
