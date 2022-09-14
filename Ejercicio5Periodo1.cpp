//Francisco Henríquez Leal
// 2B #10
#include <iostream>
using namespace std;


int main(){
	string dia;
	cout << "Digita un dia de la semana sin usar tildes: ";
	cin >> dia;
	if (dia == "sabado" or dia =="Sabado" or dia =="SABADO"){
		cout << "Feliz fin de semana" << endl;
	} else if (dia == "domingo" or dia =="Domingo" or dia =="DOMINGO"){
		cout << "Feliz descanso";
	} else {
		cout "Dia inexistene o errado";
	}
}
