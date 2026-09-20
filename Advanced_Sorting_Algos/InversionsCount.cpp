/*
QUESTION: Count Inversions (GFG)
  Array me kitne pairs (i, j) hain jahan i < j aur arr[i] > arr[j].
  Yaani kitne pairs "ulte order" me hain.
  Example: arr = {2,4,1,3,5}
           inversions = (2,1), (4,1), (4,3)  ->  answer = 3

YAAD RAKHO: merge sort ke andar, merge se PEHLE: a[i] > b[j] mila to cnt += (m - i), j++; warna i++.

METHOD 1 (Brute Force - is file me nahi hai):
  Do loops, har pair check karo -> O(n^2). Bade input pe TLE.

METHOD 2 (Sir ka method): Merge Sort ke saath counting

LOGIC (short notes):
  - Merge Sort me array ko a (left) aur b (right) me todte hain.
  - Total inversions = left ke andar wale + right ke andar wale
    + cross wale (ek element a me, doosra b me).
  - Left aur right ke andar wale recursion khud gin lega.
  - Cross inversions merge se PEHLE gin lo, jab a aur b dono sorted hain:
      agar a[i] > b[j], to a[i] ke baad wale saare elements bhi b[j] se
      bade honge (kyunki a sorted hai). To ek saath (m - i) inversions
      mil gaye, aur j++.
      warna i++.
  - Uske baad normal merge() karke arr ko sorted bana do, taaki upar wale
    level ke liye bhi halves sorted milein.
  - count ek class variable hai, har level pe usme add hota rehta hai.

TIME: O(n log n)    SPACE: O(n)

NOTE: Ye sirf class hai (GFG pe paste karne ke liye). Isme main() aur
      #include nahi hai, isliye local pe direct compile nahi hoga.
      Bahut bade n pe count int se overflow ho sakta hai - tab long long lo.
*/
class Solution {
  public:
    int count; // total inversions yahan jama honge
    // do sorted arrays a aur b ko c me merge karta hai
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

    // cross inversions ginta hai: a[i] > b[j] wale pairs (a aur b sorted hone chahiye)
    int inversions(vector<int>& a, vector<int>& b){
        int i = 0, j = 0, cnt = 0;
        int m = a.size(), n = b.size();
        while(i < m && j < n){
            if(a[i] > b[j]){ // kucch inversions mil gaye
                cnt += (m-i); // a[i..m-1] sab b[j] se bade hain
                j++;
            }
            else i++; // a[i] chhota hai, agla a[i] try karo
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
        mergeSort(a); // left ke andar ke inversions gine + a sorted
        mergeSort(b); // right ke andar ke inversions gine + b sorted
        count += inversions(a,b); // extra -> cross inversions, merge se pehle
        merge(a,b,arr);
    }
    int inversionCount(vector<int> &arr) {
        count = 0;
        mergeSort(arr);
        return count;
    }
};
