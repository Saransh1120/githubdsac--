/*
TOPIC: 2D Array ka Syntax + saare elements ka sum
  Example: {{5,8,1,2},{9,9,4,4},{7,0,3,5}} -> matrix print, sum = 57

YAAD RAKHO: arr[rows][cols]; row-wise print = bahar i (row), andar j (column).

METHODS:
  - Declare method 1: int arr[3][4];  (values garbage)
  - Declare method 2: int arr[][4] = {{...},{...},{...}};
    (rows compiler khud gin lega, par COLUMNS dena zaroori hai)
  - Print method 1 (use ho raha hai): row-wise -> bahar i, andar j.
  - Print method 2 (comment me): column-wise -> bahar j, andar i.
    Isse matrix ka transpose jaisa print hota hai.

LOGIC (short notes):
  - arr[i][j] = i-th row ka j-th element.
  - Memory me 2D array bhi ek line me hi store hota hai (row ke baad row).
  - Har row ke baad endl taaki matrix shape me dikhe.
*/
#include<iostream>
using namespace std;
int main(){
    // int arr[3][4]; // method 1: sirf declare
    int arr[][4] = {{5,8,1,2},{9,9,4,4},{7,0,3,5}}; // method 2: values ke saath
    int sum = 0;
    for(int i=0;i<3;i++){       // rows
        for(int j=0;j<4;j++){   // columns
            cout<<arr[i][j]<<" ";
            sum += arr[i][j];
        }
        cout<<endl;
    }
    cout<<sum;
    // column-wise print:
    // for(int j=0;j<4;j++){
    //     for(int i=0;i<3;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}
