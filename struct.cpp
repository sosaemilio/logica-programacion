#include <iostream>
#include <vector>

using namespace std;

//Creamos estructura de nombre Producto
struct productos {
	char nombre_producto [25];
	int cantidad;
	float precio;
	int codigo_producto;
	} datosProductos[10];
	
int main(){
	
	//Variable para conocer la cantidad de productos
	int n;
	
	//Pregunta e ingreso de cantidad de productos
	cout<<"Cuantos productos quieres ingresar: ";
	cin>>n;
	
	//Contador que toma en cuenta la variable n para saber cuantas veces repetira
	for (int i=0;i<n;i++){
		
		cout<<"\nIngresar el nombre del productor: ";
		cin>>datosProductos[i].nombre_producto;
		
		cout<<"\nIngresa la cantidad: ";
		cin>>datosProductos[i].cantidad;
	
		cout<<"\nIngresar el precio: ";
		cin>>datosProductos[i].precio;
		
		cout<<"\nIngresar el codigo de producto: ";
		cin>>datosProductos[i].codigo_producto;
	}
	
	//Variables para consultar
	int consulta, consultaFinal;
	
	//Repeticion de consulta parara hasta que consulta sea 0 o falsa
	do {
	cout<<"\nIngresa el numero de producto a consultar (en el orden que lo ingresas) 0 para salir: "<<endl;
	cin>> consulta;
	
	//Restamos una para no confundir a el usuario si ingresamos 1 y no refleja el resultado correcto
	consultaFinal = consulta - 1;
	
	//Consulta de todo
	cout<<"Nombre del producto: "<<datosProductos[consultaFinal].nombre_producto<<endl;
	cout<<"Cantidad disponible: "<<datosProductos[consultaFinal].cantidad<<" unidades"<<endl;
	cout<<"Precio: "<<datosProductos[consultaFinal].precio<<" $"<<endl;
	cout<<"Codigo del Producto: "<<datosProductos[consultaFinal].codigo_producto<<endl;
	} while(consulta);
	
	return 0;
}