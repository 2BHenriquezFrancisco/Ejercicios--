//Francisco Henríquez Leal
// 2B #10
#include <iostream>
using namespace std ;


int main ( ) {
    int n1 , n2 , c ;
    cout << " Digita el primer numero : " ;
    cin >> n1 ;
    cout << " Digita el segundo numero : " ;
    cin >> n2 ;
    c = n1 ;
   while ( c > n2 ) {
        cout << c << endl ;
        c-- ;
    }
    return 0 ;
}
