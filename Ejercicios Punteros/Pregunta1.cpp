#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    system("Color F0");
	char letra, * dir_letra;
	bool flag = false;			// NO ES VOCAL

	do {

		cout << "Digite una letra: "; cin >> letra;
		dir_letra = &letra;

		switch (*dir_letra) {
		
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout << "\tLa vocal ingresada es MAYUSCULA" << endl; flag = true; break;
		default: cout << "\tCaracter invalido, ingrese una vocal mayuscula."  << endl; break;
		}

	} while (flag == false);

	
	return 0;

}
