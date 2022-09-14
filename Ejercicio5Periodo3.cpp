//Francisco Henríquez Leal
// 2B #10
#include <iostream>
using namespace std ;


int main ( ) {
   int nums [ ] = { 4 , 9 , 6 , 72 , 31 , 44 } ;
   int even = 0 ;

   for ( int nums : nums ) {
      if ( nums % 2 == 0 )
         even ++ ;
  }
   cout << even ;
}
