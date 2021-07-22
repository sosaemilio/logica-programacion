#include <iostream>
using namespace std;

const int tasa_mensual = 2;

int main() {
	//variables
	double dinero;
	double interes_mensual;
	double interes_anual;
	const int meses = 12;
	
	//Entrada de datos
	cout<<"Ingrese la cantidad de dinero. \n";
	cin>> dinero;
	
	//Aqui el valor del dinero lo incluyo a otra variable con el fin de ser mostrado en la pantalla final, por eso lo asigno como un constante
	const double dinero_sin_intereses = dinero;
	
	//Ocurre el bucle, decidi for
	for(int i=1; i<=meses; i++){
		interes_mensual = (dinero * tasa_mensual)/100;
		dinero += interes_mensual;
		cout<< "Interes acumulado en el mes "<<i<<" es "<<interes_mensual<<" dolares. \n";
	}
	
	//Se resta el dinero capitalizado menos el dinero original, osea el ingresado en la entrada
	interes_anual = dinero - dinero_sin_intereses;
	
	//Salida
	cout<<"Capital acumulado en 12 meses de forma capitalizada "<<dinero<<" y los intereses TOTALES del ciclo "<<interes_anual<<" \n";
} 