#include <iostream>
using namespace std;

int numero_1, numero_2, divisible;

int main(){
	cout<<"Escribe un numero 1 \n";
	cin>>numero_1;
	cout<<"Escribe el numero 2 \n";
	cin>>numero_2;
	divisible = numero_1 % numero_2;
	if(divisible == 0)
		cout<<"El numero "<<numero_1<<" es divisible entre "<<numero_2<<"";
	else cout<<"El numero no es divisible";
}