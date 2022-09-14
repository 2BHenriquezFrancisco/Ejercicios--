//Francisco Henríquez Leal
// 2B #10
#include <iostream>
#include <stdlib.h>
using namespace std;


long potenciaDe(int base, int exponente);



int main(){
    int base, exponente;
    long resultado;
    cout<<"digita la base: "; cin>>base;
    cout<<"digita el exponente: "; cin>>exponente;
    resultado = potenciaDe(base,exponente);
    cout<<"el resultado es: "<<resultado<<endl;
    return 0;
}



long potenciaDe(int base, int exponente){
    if(exponente !=1){
        return base * potenciaDe(base, exponente - 1);
    }else{
    return base;
    }
}
