/*
QUESTION: Function with Arguments - Minimum of Two
  Example: minOfTwo(71, 34) -> 34 is smaller

YAAD RAKHO: function(int a, int b) -> a, b = parameters; call me (71, 34) = arguments.

LOGIC (short notes):
  - Parameters function ki definition me hote hain, arguments call karte time bhejte hain.
  - Order same rehta hai: 71 -> a, 34 -> b.
  - Naam camelCase me: pehla word chhota, baaki words ka pehla letter bada (minOfTwo).
*/
#include <iostream>
using namespace std;
void minOfTwo(int a, int b){ // 2 numbers ko receive karega and unka min print karega
    if(a<b) cout<<a<<" is smaller"<<endl;
    else cout<<b<<" is smaller"<<endl;
}
// isTareekeKoHumCamelCaseKehteHai
int main(){
    minOfTwo(71,34); // 34 is smaller
}
