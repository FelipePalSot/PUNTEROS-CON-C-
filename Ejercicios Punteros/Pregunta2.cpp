#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

void PedirMatriz();
void Simetria(int**, int, int);
void Salida(int**, int, int);

int** matriz, filas, columnas, cont=0;

int main() {
    system("Color F0");
	PedirMatriz();
	Simetria(matriz, filas, columnas);
	cout << endl;
	Salida(matriz, filas, columnas);


	for (int i = 0; i < filas; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;

	getch();
	return 0;

}

void PedirMatriz() {
	cout << "\tIngrese el numero de filas: "; cin >> filas;
	cout << "\tIngrese el numero de columnas: "; cin >> columnas;

	//RESERVANDO MEMORIA PARA LA MATRIZ

	matriz = new int* [filas];
	for (int i = 0; i < filas; i++) {
		matriz[i] = new int[columnas];
	}

	cout << endl;
	cout << "\tIngrese los valores de la matriz: " << endl;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << "\tIngrese el valor [" << i+1 << "][" << j+1 << "] : "; cin >> *(*(matriz + i) + j);		
		}
	}
}

void Simetria(int**matriz, int filas, int columnas) {
	if (filas == columnas) {
		for (int i = 0; i < filas; i++) {
			for (int j = 0; j < columnas; j++) {
				if (*(*(matriz + i) + j) == *(*(matriz + j) + i)) {		
					cont++;
				}
			}
		}
	}
}

void Salida(int** matriz, int filas, int columnas) {

	cout << endl << "La Matriz: " << endl;

	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			cout << *(*(matriz + i) + j) << " ";
		}
		cout << endl;
	}

	if (cont == filas * columnas) {
		cout <<"La matriz es Simetrica";
	}
	else {
		cout <<"La matriz no es simetrica";
	}
}
