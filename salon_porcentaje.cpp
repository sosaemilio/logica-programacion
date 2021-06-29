#include <iostream>
#include <iomanip>

//Odio el standar por eso esto
using namespace std;

//Variables
int total_hombres, total_mujeres;
double porcentaje_hombres, porcentaje_mujeres, total_personas;

//Funciones
void personas_salon();
void calculo();
void resultado();

//My main
int main(){
  personas_salon();
  calculo();
  resultado();
  return 0;
}

//Ingresa los valores
void personas_salon(){
	cout<<"Ingresa el numero total de hombres \n";
	cin>>total_hombres;
	cout<<"Ingresa el numero total de mujeres \n";
	cin>>total_mujeres;
}

//Los calcula
void calculo(){
	total_personas = total_hombres + total_mujeres;
	porcentaje_hombres = ((total_hombres * 100) / total_personas);
	porcentaje_mujeres = ((total_mujeres * 100) / total_personas);
}

//Mis resultados
void resultado(){
	cout<<"El total en el salon es "<<total_personas<<" personas \n";
	cout<<"El porcentanje de hombres es "<<fixed<<porcentaje_hombres<<setprecision(2)<<"% y el porcentaje de mujeres "<<fixed<<porcentaje_mujeres<<setprecision(2)<<"%.";
}