#include<iostream>
#include<stdlib.h>
using namespace std;

void PedirValores();
void InvertirValores(float*, float*);
void MostrarValores();

float num1, num2;

int main() {
    system("Color F0");
	PedirValores();
	cout << endl;
	InvertirValores(&num1, &num2);
	MostrarValores();
	return 0;

}

void PedirValores() {
	cout << "Ingrese el primer numero: "; cin >> num1;
	cout << "Ingrese el segundo numero: "; cin >> num2;
}

void InvertirValores(float* dir_num1, float* dir_num2) {
	float aux = 0;

	aux = *dir_num1;
	*dir_num1 = *dir_num2;
	*dir_num2 = aux;
}

void MostrarValores() {
	cout << "El nuevo primer ahora es: " << num1 << endl;
	cout << "El nuevo segundo ahora es: " << num2 << endl;
}
