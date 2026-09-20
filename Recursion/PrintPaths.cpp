/*
QUESTION: Print All Paths in a Grid (Maze Path)
  m x n grid hai. Top-left se bottom-right jaana hai. Sirf RIGHT (R)
  ya DOWN (D) chal sakte ho. Saare paths print karo.
  Example: m = 2, n = 3 ->  RRD, RDR, DRR

YAAD RAKHO: right -> paths(m, n-1, s+"R"), down -> paths(m-1, n, s+"D"). (1,1) pe print, 0 pe return.

METHOD: Recursion (har step pe 2 choices - right ya down)

LOGIC (short notes):
  - m, n = abhi kitni rows aur columns bache hain.
  - Right chalne pe ek column kam -> paths(m, n-1, s+"R")
  - Down chalne pe ek row kam     -> paths(m-1, n, s+"D")
  - BASE CASE 1: m == 1 aur n == 1 -> destination pe pahunch gaye,
    path s print karo.
  - BASE CASE 2: m == 0 ya n == 0 -> grid ke bahar chale gaye, return.
  - s me ab tak ka path jud ta jaata hai.
  - Sirf count chahiye to UniquePaths.cpp dekho.

TIME: O(2^(m+n))
*/
#include<iostream>
using namespace std;
void paths(int m, int n, string s){
    if(m==1 && n==1){
        cout<<s<<endl; // sahi path
        return;
    }
    if(m==0 || n==0) return; // grid ke bahar
    paths(m,n-1,s+"R"); // right
    paths(m-1,n,s+"D"); // down
}
int main(){
    int m,n;
    cout<<"Enter rows & cols: ";
    cin>>m>>n;
    paths(m,n,""); // khaali path se start
}
