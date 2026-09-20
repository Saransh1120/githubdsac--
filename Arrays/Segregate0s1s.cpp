/*
QUESTION: Segregate 0s and 1s (GFG)
  Array me sirf 0 aur 1 hain. Saare 0 left me aur saare 1 right me karo.
  Example: {0,0,1,1,0} -> {0,0,0,1,1}

YAAD RAKHO: i left se, j right se. arr[i]==0 -> i++, arr[j]==1 -> j--, dono galat jagah -> swap.

METHODS (sir ne 2 methods kiye hain):
  - Method 1 (comment me - Two Pass / Counting):
      pehle 0 aur 1 gino. Phir pehle "zeros" jagah pe 0 bharo, baaki 1.
      TIME: O(n), 2 baar array traverse.
  - Method 2 (use ho raha hai - One Pass / Two Pointers):
      i = 0, j = n-1.
        arr[i] == 0 -> sahi jagah hai, i++
        arr[j] == 1 -> sahi jagah hai, j--
        arr[i] == 1 aur arr[j] == 0 -> dono galat, swap, i++, j--
      TIME: O(n), sirf 1 baar traverse.

SPACE: O(1) dono me
NOTE: Sirf class hai (GFG ke liye), main() nahi hai.
*/
class Solution {
  public:
    // Method 2 (One Pass)
    void segregate0and1(vector<int> &arr) {
        int i = 0, j = arr.size() - 1;
        while(i<j){
            if(arr[i] == 0) i++;       // left me 0 -> sahi
            else if(arr[j] == 1) j--;  // right me 1 -> sahi
            else if(arr[i] == 1 && arr[j] == 0){ // dono galat -> swap
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
    }

    // // Method 1 (Two Pass)
    // void segregate0and1(vector<int> &arr) {
    //     int zeros = 0, ones = 0;
    //     for(int i=0;i<arr.size();i++){
    //         if(arr[i] == 0) zeros++;
    //         else ones++;
    //     }
    //     for(int i=0;i<zeros;i++){
    //         arr[i] = 0;
    //     }
    //     for(int i=zeros;i<arr.size();i++){
    //         arr[i] = 1;
    //     }
    // }
};
