#include <iostream>
using namespace std;

int main(){
	//Variables
	int fin;
	int numero;
	int multiplo_tres = 0;
	int contador = 1;
	
	//entrada de datos
	cout<<"Ingresa hasta donde quieres saber los multiplos 3 \n";
	cin>>fin;
	
	//bucle
	while (contador <= fin) {
		//comienza a sumar
		numero = numero + 1;
		contador += 1;
		//aqui se aplica el condicional si el numero es multiplo de 3
		if (numero % 3 == 0) {
			multiplo_tres += numero;
		}
	}
	
	//Salida completa
	if (multiplo_tres == 0) {
		cout<<"No existe multiplo de tres \n"; //Si no hay multiplos de tres saca esto
	} else { 
		cout<<"La suma de los multiplos de tres del 1 al "<<fin<<" es "<<multiplo_tres<<"\n";  //Si hay algun multiplo de tres muestra la suma
	}	
}