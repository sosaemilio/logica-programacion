#include <iostream>
using namespace std;

double numero;

int main(){
	cout<<"Dime un numero para saber si es positivo o negativo";
	cin>>numero;
	if(numero > 0)
		cout<<""<<numero<<" es positivo.";
	else 
		cout <<""<<numero<<" es negativo";
	return 0;
}