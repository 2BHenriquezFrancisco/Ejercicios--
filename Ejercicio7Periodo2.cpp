//Francisco Henríquez Leal
// 2B #10
#include <iostream>
#include <stdlib.h>
using namespace std ;


int num ( int a ) {
    if ( a < 0 ) {
    return -1 ;
    }
    else if ( a > 0 ) {
    return 1 ;
    }
    else {
    return 0 ;
    }
    
}



int main ( ) {
    int a , b ;
    cout << " \ n Digita un numero : \ n \ n " ;
    cin >> a ;
    cout << " \ n \ n \ n \ t " << num ( a ) ;

    return 0 ;
}
