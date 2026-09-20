/*
QUESTION: Kth Smallest Element (GFG)
  Array me k-th sabse chhota element batao.
  Example: arr = {7,10,4,3,20,15}, k = 3 -> 7

YAAD RAKHO: Selection sort ke sirf k passes chalao -> arr[k-1] answer.

METHODS:
  - Method 1: poora sort karo (sort()) aur arr[k-1] return -> O(n log n)
  - Method 2 (is file me): Selection Sort ke sirf k passes -> O(n*k)
    (Heap wala method aage padhoge.)

LOGIC (short notes):
  - Selection sort ke har pass me bache hue part ka minimum dhoondh ke
    aage (j pe) rakh dete hain.
  - k passes ke baad pehle k elements sorted aur sabse chhote hain.
  - To k-th smallest = arr[k-1] (0 based index).
  - Poora sort karne ki zaroorat nahi.

TIME: O(n*k)    SPACE: O(1)
NOTE: Sirf class hai (GFG ke liye), main() nahi hai.
*/
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // Selection Sort
        int n = arr.size();
        for(int j=0;j<k;j++){ // k passes
            int mn = arr[j], mnIdx = j;
            for(int i=j;i<n;i++){ // j se aage ka minimum
                if(arr[i] < mn){
                    mn = arr[i];
                    mnIdx = i;
                }
            }
            swap(arr[j],arr[mnIdx]); // minimum ko j pe
        }
        return arr[k-1];
    }
};
