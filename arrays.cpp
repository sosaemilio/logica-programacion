#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//Definimos las variables y vectores
	vector<int> vectorCompleto;
	vector<int> vectorPar;
	vector<int> vectorImpar;
	int numero;
	
	
	cout << "Por favor ingresa los numeros (Recuerda que 0 para salir) \n";
	
	//Creamos un loop donde se preguntara el numero, lo ingresara a una linea y además dependiendo de si es par o impar lo colaca en su vector
	do {
		cin>>numero;
		
		vectorCompleto.push_back (numero);
		
		if (numero % 2 == false) {
			vectorPar.push_back(numero);
		} else {
			vectorImpar.push_back(numero);
		}
	} while (numero);
	
	//conocemos el tamaño de los vectores para poder saber cuantas veces repetiremos el loop
	int tamanioCompleto = vectorCompleto.size();
	int tamanioPar = vectorPar.size();
	int tamanioImpar = vectorImpar.size();
	
	//Creamos tres loops con el principal proposito de conocer los resultados
	cout<<"El vector con todos los numeros es: "<<endl;
	for (int i=0;i<tamanioCompleto;i++){
	cout<< vectorCompleto[i]<< ",";
	}
	
	cout<<"\n";
	
	cout<<"Vector de numeros pares: " <<endl;
	for (int i=0;i<tamanioPar;i++){
	cout<< vectorPar[i]<<",";
	}
	
	cout<<"\n";
	
	cout<<"Vector de numeros impares: " <<endl;
	for (int i=0;i<tamanioImpar;i++){
	cout<< vectorImpar[i]<<",";
	}
	return 0;
}