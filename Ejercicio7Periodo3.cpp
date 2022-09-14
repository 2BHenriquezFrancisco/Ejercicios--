//Francisco Henríquez Leal
// 2B #10
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


int main ( ) {
    int n , x , c = 0 , cp = 0;
    cout <<" Digita la cantidad de numeros : ";
    cin >> n ;
   while  (c<n)
   {
    cout <<" Digita numero : " << endl;
    cin >> x;
    if (x > 0)
    cp = cp + 1;
    c = c + 1;
   }
    cout << " la cantidad de positivos es : " << cp << endl;
    getch ( );
    return 0;
}
