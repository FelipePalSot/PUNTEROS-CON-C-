#include<iostream>
#include<stdlib.h>
using namespace std;

void PedirDatos();
void MostrarNotas();

float* notas;
int cant_notas;

int main() {
    system("Color F0");
	PedirDatos();
	MostrarNotas();
	
	return 0;
}

void PedirDatos() {
	cout << "Ingrese la cantidad de notas: "; cin >> cant_notas;
	notas = new float[cant_notas];

	for (int i = 0; i < cant_notas; i++) {
		cout <<"Digite la nota numero " << i + 1 << ": "; cin >> *(notas + i);			
	}
}

void MostrarNotas() {
	cout << "\tLas Notas Ingresadas: " << endl << endl;

	for (int i = 0; i < cant_notas; i++) {
		cout << "La nota numero "<<i + 1 << " es : " << *(notas + i) << endl;
	}
}
