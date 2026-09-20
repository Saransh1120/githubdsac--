/*
QUESTION: Wave Array (GFG)
  Sorted array ko wave jaisa banao: arr[0] >= arr[1] <= arr[2] >= arr[3] ...
  Example: {1,2,3,4,5} -> {2,1,4,3,5}

YAAD RAKHO: sorted array me bas har pair (0,1), (2,3), (4,5) ... ko swap kar do.

LOGIC (short notes):
  - Array pehle se sorted hai, to arr[i] <= arr[i+1].
  - Swap karne se arr[i] >= arr[i+1] ho jaata hai -> upar-neeche wave.
  - i += 2 -> har doosra pair.
  - Odd length me last element akela reh jaata hai, wo theek hai.

TIME: O(n)    SPACE: O(1)
NOTE: arr.size()-1 me agar array khaali ho to size_t underflow hoga
      (bahut bada number). GFG me n >= 1 hota hai, to chalta hai.
      Sirf class hai (GFG ke liye), main() nahi hai.
*/
class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i+=2){ // pairs: (0,1), (2,3) ...
            swap(arr[i],arr[i+1]);
        }
    }
};
