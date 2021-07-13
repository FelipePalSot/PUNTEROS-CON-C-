#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

struct Complejo {
	float real;
	float imaginario;
}z[2], *dir_z = z;

void PedirDatos();
void RestaImaginaria(Complejo*);
void MostrarResultado(Complejo*);

int main() {
    system("Color F0");
	PedirDatos();
	RestaImaginaria(dir_z);
	MostrarResultado(dir_z);

	return 0;

}

void PedirDatos() {

	cout << "\t\tIngrese los valores de los numeros complejos: " << endl << endl;

	for (int i = 0; i < 2; i++) {
		cout << "Ingrese complejo numero " << i + 1 << endl;
		cout << "Ingrese la parte real: "; cin >> (z + i)->real;
		cout << "Ingrese la parte imaginaria: "; cin >> (z + i)->imaginario;
		cout << endl;
	}
}

void RestaImaginaria(Complejo* z) {
	(z)->real -= (z + 1)->real;			
	(z)->imaginario -= (z + 1)->imaginario;		
}

void MostrarResultado(Complejo* z) {
	cout << endl << endl;
	cout << "Resultado de la resta es: " << z->real << " - " << z->imaginario << "j" << endl;
}
