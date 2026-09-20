/*
TOPIC: Address of Array (array memory me kaise store hota hai)

YAAD RAKHO: arr (array ka naam) = &arr[0]; har agla int 4 bytes aage hota hai.

LOGIC (short notes):
  - Array ke elements memory me lagatar (contiguous) store hote hain.
  - arr likhne se pehle element ka address milta hai -> arr == &arr[0].
  - int 4 bytes ka hai, isliye &arr[1] = &arr[0] + 4, &arr[2] = &arr[0] + 8.
    (Output hex me aata hai, jaise 0x61fe00, 0x61fe04, 0x61fe08)
  - n = sizeof(arr)/4 -> total bytes / ek int ke bytes = elements ki ginti.
    (sizeof(arr)/sizeof(arr[0]) likhna zyada safe hai.)
*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {-62,-35,-5,-1,-88,-34};
    int n = sizeof(arr)/4; // 24 bytes / 4 = 6 elements
    cout<<arr<<endl;     // pehle element ka address
    cout<<&arr[0]<<endl; // same as upar
    cout<<&arr[1]<<endl; // +4
    cout<<&arr[2]<<endl; // +8
}
