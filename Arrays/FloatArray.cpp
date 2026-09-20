/*
TOPIC: Float Array

YAAD RAKHO: array kisi bhi data type ka ho sakta hai; index 0 se start.

LOGIC (short notes):
  - float arr[] = {3.1415, 2.81, 9.8}; -> 3 floats.
  - arr[2] = teesra element = 9.8.
  - float approx 6-7 digits tak sahi rakhta hai. Zyada precision
    chahiye to double lo.
*/
#include<iostream>
using namespace std;
int main(){
    float arr[] = {3.1415,2.81,9.8};
    cout<<arr[2]<<endl; // 9.8
}
