#include <iostream>
#include <iomanip>

using namespace std;

double calificacion;

int main(){
	cout<<"Escribe la tu calificacion \n";
	cin>>calificacion;
	if(calificacion >= 0 && calificacion <= 9)
		cout<<"Estas reprobado";
	else if(calificacion >= 10 && calificacion <= 15)
		cout<<"Calificacion suficiente";
	else if(calificacion >= 16 && calificacion <= 20)
		cout<<"Calificacion excelente";
	return 0;
}