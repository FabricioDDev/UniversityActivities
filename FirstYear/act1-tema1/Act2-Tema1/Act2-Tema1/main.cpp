#include <iostream>
using namespace std;
int quitarRepetidos(int vectorSinProcesar[], int  vectorSinRepetidos[]);
int main() {
	/*
	2 Hacer una función llamada quitarRepetidos que reciba dos vectores de enteros de 10 elementos
	llamados vectorSinProcesar y vectorSinRepetidos. 
	La función debe procesar el vectorSinProcesar de manera que en el vectorSinRepetidos
	queden todos los elementos distintos del vectorSinProcesar. 
	La función debe devolver la cantidad de elementos asignados a vectorSinRepetidos.

	Ejemplo:
	vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 }
	vectorDos[10];
	int elementos = quitarRepetidos(vectorUno, vectorDos);

	En elementos debe quedar el valor 5 ya que son 5 los elementos sin repetirse del vector.
	Además el vectorDos debe contener los valores 1, 2, 5, 4 y 3.
	*/
	int vectorUno[10] = { 1, 1, 3, 2, 3, 3, 4, 4, 3, 3 };
	int *ptrV1 = vectorUno;
	int vectorDos[10] = {};
	int elementos = quitarRepetidos(vectorUno, vectorDos);
	cout << "Cantidad de numeros repetidos: " << elementos << endl;
	cout << "El vector sin numeros repetidos queda de la siguiente forma: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << vectorDos[i] << ", ";
	}
	return 0;
}

int quitarRepetidos(int vectorSinProcesar[], int vectorSinRepetidos[]) {
	int contadorRepetidos = 0;
	bool repetido = false;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (vectorSinProcesar[i] == vectorSinRepetidos[j]) {
				repetido = true;
				break;
			}
			else { repetido = false; }
		}
		if (!repetido) {
			vectorSinRepetidos[i] = vectorSinProcesar[i];
			repetido = false;
		}
		else {
			contadorRepetidos++;
		}
	}
	return contadorRepetidos;
}