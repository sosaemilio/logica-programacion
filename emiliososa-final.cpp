#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void registro();
void consulta();
void menu();

struct registroAlumno {
	char nombre [50];
	char apellido[50];
	int edad;
	int cedula;
	char direccion[50];
};

int main(){	
	int opcionMenu;
	
	cout<<"Ingresa la opcion a realizar: "<<endl;
	cout<<"1. Registrar alumno"<<endl;
	cout<<"2. Leer datos del alumno"<<endl;
	cin>> opcionMenu;
	
	switch (opcionMenu){
		case 1:
		 registro();
		break;
		case 2:
		 consulta();
		break;
		default: cout<<"Usted no ingreso una opcion valida, intentelo nuevamente"<<endl;
	}
	
	system("pause");
	return 0;
}

void menu(){
	int opcionMenu;
	
	cout<<"Ingresa la opcion a realizar: "<<endl;
	cout<<"1. Registrar alumno"<<endl;
	cout<<"2. Leer datos del alumno"<<endl;
	cin>> opcionMenu;
	
	switch (opcionMenu){
	case 1:
		registro();
	break;
	case 2:
	 consulta();
	break;
	default: cout<<"Usted no ingreso una opcion valida, intentelo nuevamente"<<endl;
	}
}


void registro(){
	
	system("cls");
	struct registroAlumno alumno;
	FILE *F;
	
	cout<<"Ingrese el nombre del alumno: ";
	cin>>alumno.nombre;
	cout<<"\nIngrese apellido: ";
	cin>>alumno.apellido;
	cout<<"\nIngrese la edad: ";
	cin>>alumno.edad;
	cout<<"\nIngresa cedula: ";
	cin>>alumno.cedula;
	cout<<"\nIngresa la direccion: ";
	cin>>alumno.direccion;
	
	F = fopen ("datosAlumno.txt","a+");
	
	if(!F){
		cout<<"El archivo no existe";
		exit (1);
	}
	
	fwrite(&alumno,sizeof(alumno),1,F);
	fclose(F);
	
	cout<<"\nAlumno creado con exito"<<endl;
	
	return menu();
}

void consulta () {
	
	system("cls");
	
	struct registroAlumno alumno;
	FILE *J;
	
	J = fopen("datosAlumno.txt", "a+");
	
	if(!J) {
		cout<<"El archivo no existe"<<endl;
		exit(1);
	}
	
	cout<<"========================================\n"<<endl;
	cout<<"Nombre\tApellido\tEdad\tCedula\tDireccion"<<endl;
    cout<<"----------------------------------------\n"<<endl;
    
    fread(&alumno,sizeof(alumno),1,J);
	while (!feof(J)) {
    	cout<<alumno.nombre;
    	cout<<"\t"<<alumno.apellido;
    	cout<<"\t"<<alumno.edad;
    	cout<<"\t"<<alumno.cedula;
    	cout<<"\t"<<alumno.direccion;
    	cout<<"\n"<<endl;
    	fread(&alumno,sizeof(alumno),1,J);
	};
	
	fclose(J);
	cout<<"\n\n";
	
	return menu();
}