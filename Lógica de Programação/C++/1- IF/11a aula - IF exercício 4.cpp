#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1, numero2, numero3;
	string resultado;
	
	cout << "Digite o 1o n�mero: \n";
	cin >> numero1;

	cout << "\nDigite o 2o n�mero: \n";
	cin >> numero2;

	cout << "\nDigite o 3o n�mero: \n";
	cin >> numero3;
			
	( numero1 > numero2 || numero1 > numero3 ) ? resultado = "O n�mero 1 � o maior" : ( numero2 > numero1 || numero2 > numero3 ) ? resultado = "O n�mero 2 � o maior" : ( numero3 > numero2 || numero3 > numero1 ) ? resultado = "O n�mero 3 � o maior";
	
	system ("pause");
	
	return 0;
	
}
