#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	//Variables
	float saldo;
	float saldoConIntereses;
	float intereses;
	
	//Entrada de datos osea el saldo
	cout<<"Ingrese su saldo a consultar \n";
	cin>>saldo;
	
	//Calculo de intereses en base al monto
	if (saldo < 200){
		intereses = (saldo * 5)/100;
		saldoConIntereses = saldo + intereses;
	} else if (saldo >= 200 && saldo < 1000){
		intereses = (saldo * 6)/100;
		saldoConIntereses = saldo + intereses;
	} else {
		intereses = (saldo * 7)/100;
		saldoConIntereses = saldo + intereses;
	}
	
	//Resultados
	cout<<"Tu saldo con ingresado sin intereses es "<<saldo<<" dolares.\n";
	cout<<"Tus intereses son "<<fixed<<intereses<<setprecision(2)<<" dolares \n";
	cout<<"Tu saldo total con intereses es "<<saldoConIntereses<<" dolares.";
}

