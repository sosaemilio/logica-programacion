#include <iostream>

using namespace std;

int main(){
	//Declaro variables
	int horas_trabajadas;
	int pago;
	
	//Entrada de datos
	cout<<"Ingrese la cantidad de horas trabajadas ";
	cin>>horas_trabajadas;
	
	//Decision
	if(horas_trabajadas <= 40) {
		//Si se trabaja igual o menos que 40 horas lo multiplico por 40
		pago = 16 * horas_trabajadas;
	} else {
		//Si no es menor igual que 40
		int salario_base = 40 * 16; //Obtengo el salario sin horas extras
		int horas_extras = (horas_trabajadas - 40) * 20; //aqui calculo el dinero por las horas extras
		pago = salario_base + horas_extras; //sumo el salario sin horas extras con el dinero de horas extras
	}
	
	//Salida
	cout<<"Trabajaste "<<pago<<" dolares.";
}