/*
QUESTION: Merge Two Sorted Arrays
  Do sorted arrays a aur b diye hain. Dono ko mila ke ek sorted array c banao.
  Example: a = {2,3,6,8}, b = {1,4,5,7,9,10}
           c = {1,2,3,4,5,6,7,8,9,10}

YAAD RAKHO: i -> a, j -> b: jo chhota wo c me; ek khatam to doosre ke bache hue copy.

METHOD: Two Pointers (i -> a, j -> b, k -> c)

LOGIC (short notes):
  - Dono arrays pehle se sorted hain, isliye dono ke pehle elements me se
    jo chhota hai wahi c me agla aayega.
  - Chhota element c me daalo aur usi array ka pointer aage badhao.
  - Jab ek array khatam ho jaaye, doosre array ke bache hue elements seedha
    c me copy kar do (wo already sorted hain).
  - c ka size pehle se m+n rakhna padta hai.
  - Yahi merge() function aage Merge Sort me use hota hai.

TIME: O(m+n)    SPACE: O(m+n) (c array ke liye)
*/
#include<iostream>
using namespace std;
void print(vector<int>& arr){
    for(int ele : arr)
        cout<<ele<<" ";
    cout<<endl;
}

void merge(vector<int>& a, vector<int>& b, vector<int>& c){
    int i = 0, j = 0, k = 0; // i -> a, j -> b, k -> c
    while(i < a.size() && j < b.size()){ // jab tak dono me elements bache hain
        if(a[i] < b[j]) c[k++] = a[i++]; // a ka chhota hai, wo daalo
        else c[k++] = b[j++];            // b ka chhota (ya equal) hai, wo daalo
    }
    while(i < a.size()) c[k++] = a[i++]; // a ke bache hue elements
    while(j < b.size()) c[k++] = b[j++]; // b ke bache hue elements
}

int main(){
    vector<int> a = {2,3,6,8};
    vector<int> b = {1,4,5,7,9,10};
    int m = a.size(), n = b.size();
    vector<int> c(m+n); // c ka size pehle se m+n
    merge(a,b,c);
    print(c);
}
