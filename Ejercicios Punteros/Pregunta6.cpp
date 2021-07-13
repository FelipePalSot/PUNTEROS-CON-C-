#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void PedirMatriz();
void MostrarMatriz(int**, int, int);
void DiagonalMatriz(int**, int, int);

int** matriz, filas, columnas, cont=0;

int main() {
    system("Color F0");
	PedirMatriz();
	cout << endl;
	MostrarMatriz(matriz, filas, columnas);
	cout << endl;
	DiagonalMatriz(matriz, filas, columnas);


	for (int i = 0; i < filas; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;

	return 0;

}

void PedirMatriz() {
	cout << "Ingrese el numero de filas: "; cin >> filas;
	cout << "Ingrese el numero de columnas: "; cin >> columnas;


	matriz = new int* [filas];
	for (int i = 0; i < filas; i++) {
		matriz[i] = new int[columnas];
	}

	cout << endl;
	cout << "Ingrese los valores de la matriz: " << endl;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "Ingrse el valor [" << i << "][" << j << "]: "; cin >> *(*(matriz + i) + j);		
		}
	}
}

void MostrarMatriz(int**matriz, int filas, int columnas) {

	cout << endl << "La matriz ingresada es:" << endl;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << *(*(matriz + i) + j) << " ";
		}
		cout << endl;
	}
}

void DiagonalMatriz(int** matriz, int filas, int columnas) {

	cout << endl << "La diagonal de la matriz es" << endl;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (i == j) {
				cout << *(*(matriz + i) + j);
			}
		}
		cout << endl;
	}
}
