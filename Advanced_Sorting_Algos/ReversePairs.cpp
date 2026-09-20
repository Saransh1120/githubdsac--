/*
QUESTION: Reverse Pairs (LeetCode 493)
  Array me kitne pairs (i, j) hain jahan i < j aur arr[i] > 2 * arr[j].
  Example: arr = {1,3,2,3,1}
           pairs = (3,1) at index (1,4), (3,1) at index (3,4)  ->  answer = 2

YAAD RAKHO: Inversion Count wala hi code, bas condition a[i] > 2*b[j] (long long me). Counting aur merge alag loops.

METHOD 1 (Brute Force - is file me nahi hai):
  Do loops, har pair check karo -> O(n^2). LeetCode pe TLE.

METHOD 2 (Sir ka method): Merge Sort ke saath counting
  Bilkul Count Inversions jaisa code hai, bas condition badli hai:
  a[i] > b[j] ki jagah a[i] > 2 * b[j].

LOGIC (short notes):
  - Merge sort se array ko a (left) aur b (right) me todo, dono sort ho jaate hain.
  - Cross pairs gino: agar a[i] > 2*b[j], to a[i] ke baad wale saare
    elements bhi 2*b[j] se bade honge (a sorted hai). To (m - i) pairs
    ek saath mil gaye, j++. Warna i++.
  - Counting aur merging ALAG loops me karne padte hain, kyunki counting
    ki condition (a[i] > 2*b[j]) aur merging ki condition (a[i] > b[j])
    alag hai. Isliye inversions() pehle, phir merge().
  - (long long) cast zaroori hai: 2 * b[j] int range se bahar ja sakta hai
    (jaise b[j] = 2^31 - 1), to overflow ho jaayega.

TIME: O(n log n)    SPACE: O(n)

NOTE: Ye sirf class hai (LeetCode pe paste karne ke liye). Isme main() aur
      #include nahi hai, isliye local pe direct compile nahi hoga.
*/
class Solution {
public:
    int count; // total reverse pairs yahan jama honge
    // normal merge: do sorted arrays a aur b ko c me
    void merge(vector<int>& a, vector<int>& b, vector<int>& c){
        int i = 0, j = 0, k = 0;
        while(i < a.size() && j < b.size()){
            if(a[i] > b[j]){
                c[k++] = b[j++];
            }
            else c[k++] = a[i++];
        }
        while(i < a.size()) c[k++] = a[i++];
        while(j < b.size()) c[k++] = b[j++];
    }

    // cross pairs ginta hai: a[i] > 2*b[j] (a aur b sorted hone chahiye)
    int inversions(vector<int>& a, vector<int>& b){
        int i = 0, j = 0, cnt = 0;
        int m = a.size(), n = b.size();
        while(i < m && j < n){
            // long long isliye taaki 2*b[j] overflow na ho
            if((long long)(a[i]) > 2*(long long)(b[j])){ // kucch inversions mil gaye
                cnt += (m-i); // a[i..m-1] sab 2*b[j] se bade hain
                j++;
            }
            else i++;
        }
        return cnt;
    }

    void mergeSort(vector<int>& arr){
        int n = arr.size();
        if(n==1) return; // 1 sized array already sorted
        vector<int> a(n/2);
        vector<int> b(n-n/2);
        int idx = 0; // arr ke elements ke liye
        for(int i=0;i<n/2;i++){ // a ko bharo
            a[i] = arr[idx++];
        }
        for(int i=0;i<n-n/2;i++){ // b ko bharo
            b[i] = arr[idx++];
        }
        mergeSort(a);
        mergeSort(b);
        count += inversions(a,b); // extra -> merge se PEHLE count karo
        merge(a,b,arr);
    }
    int reversePairs(vector<int>& arr) {
        count = 0;
        mergeSort(arr);
        return count;
    }
};
