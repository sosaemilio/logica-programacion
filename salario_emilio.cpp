#include <iostream>
using namespace std;

//Variables
double salario_actual, salario_nuevo, total_pagar;

//Declara las funciones
void datos();
void proceso();
void resultado();

//Aqui ocurre lo principal en el orden de primero tomar los datos, procesalos y da un resultado
int main() {
	datos();
	proceso();
	resultado();
	return 0;
}

//Aqui tomamos los datos del salario
void datos() {
	cout << "Cual es tu salario? ";
	cin >> salario_actual;
}

//Aqui ocurre el proceso del salario que dimo arribas se le agrega el interes posteriormente se le descuenta 
void proceso() {
	salario_nuevo = ((salario_actual*8)/100+salario_actual);
	total_pagar = (salario_nuevo-(salario_nuevo*2.5)/100);
}

//Aqui da el resultado
void resultado() {
	cout << "tu nuevo salario es "<<total_pagar<<" bolivares";
}