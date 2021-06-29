#include <iostream>
 using namespace std;
 
 int main(){
 	int meses;
 	const int prestamo = 10000;
 	double total_pagar = 0;
 	const int interes_anual = 27;
 	const float interes_mensual = interes_anual/12;
 	const float mensualidad = (interes_mensual*prestamo)/100;
 	cout << "Escriba la cantidad de meses ";
 	cin >> meses;
 	total_pagar = meses*mensualidad;
 	cout << "Valor a pagar mensual"<<total_pagar<<" dolares";
 	return 0;
 }