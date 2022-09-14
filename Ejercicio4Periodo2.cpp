//Francisco Henríquez Leal
// 2B #10
#include <iostream>
#include <stdlib.h>
using namespace std ;


void llenarPares ( int [ 100 ] ) ;
void llenarImpares ( int [ 100 ] ) ;
void mostrarPares ( int [ 100 ] ) ;
void mostrarImpares ( int [ 100 ] ) ;
int main ( ) {
 int numeros [ 100 ] ;
 llenarPares ( numeros ) ;
 llenarImpares ( numeros ) ;
 mostrarPares ( numeros ) ;
 mostrarImpares ( numeros ) ;
 return 0 ;
}


void llenarPares ( int numeros [ 100 ] ) {
 for ( int i = 0 ; i < 100 ; i ++ ) {
  if ( i % 2 == 0 ) { numeros [ i ] = i ; }
}


}
void llenarImpares ( int numeros [ 100 ] ) {
 for ( int i = 0 ; i < 100 ; i ++ ) {
  if ( i % 2 == 1 ) { numeros [ i ] = i ; }
}

}
