/*
QUESTION: Merge Sort
  Ek array ko ascending order me sort karo, Merge Sort use karke.
  Example: {5,2,11,8,3,7,1,-4,6}  ->  {-4,1,2,3,5,6,7,8,11}

YAAD RAKHO: aadha-aadha todo (a, b), dono ko recursion se sort karo, phir merge. Base case: size 1.

METHOD: Divide and Conquer (Recursion) + merge two sorted arrays

LOGIC (short notes):
  - DIVIDE: array ko do half me todo -> a (pehle n/2 elements) aur
    b (baaki n - n/2 elements).
  - CONQUER: mergeSort(a) aur mergeSort(b) ko recursion se sort karwao
    (faith rakho ki recursion dono ko sort kar dega).
  - COMBINE: ab a aur b dono sorted hain, to merge() se dono ko wapas
    original arr me merge kar do.
  - BASE CASE: 1 size ka array already sorted hota hai, return.
  - Har level pe total n kaam hota hai, aur levels log n hain.
  - Merge Sort stable hai aur hamesha O(n log n) chalta hai
    (worst case me bhi), lekin extra space leta hai.

TIME: O(n log n)    SPACE: O(n) (a aur b ke extra arrays)
*/
#include<iostream>
using namespace std;
void print(vector<int>& arr){
    for(int ele : arr)
        cout<<ele<<" ";
    cout<<endl;
}

// do sorted arrays a aur b ko c me merge karta hai (Merge2SortedArrays wala)
void merge(vector<int>& a, vector<int>& b, vector<int>& c){
    int i = 0, j = 0, k = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] > b[j]) c[k++] = b[j++];
        else c[k++] = a[i++]; // equal pe a wala pehle -> isliye sort stable hai
    }
    while(i < a.size()) c[k++] = a[i++];
    while(j < b.size()) c[k++] = b[j++];
}

void mergeSort(vector<int>& arr){
    int n = arr.size();
    if(n==1) return; // 1 sized array already sorted
    vector<int> a(n/2);     // left half
    vector<int> b(n-n/2);   // right half (odd n pe ek element zyada)
    int idx = 0; // arr ke elements ke liye
    for(int i=0;i<n/2;i++){ // a ko bharo
        a[i] = arr[idx++];
    }
    for(int i=0;i<n-n/2;i++){ // b ko bharo
        b[i] = arr[idx++];
    }
    mergeSort(a); // left half sort
    mergeSort(b); // right half sort
    merge(a,b,arr); // dono sorted halves ko wapas arr me merge
}

int main(){
    vector<int> arr = {5,2,11,8,3,7,1,-4,6};
    print(arr);
    mergeSort(arr);
    print(arr);
}
