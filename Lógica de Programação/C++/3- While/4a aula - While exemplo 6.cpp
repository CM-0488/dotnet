#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int impares, numero, contador;
		
	cout << "Escolha um n�mero para encontrar a quantidade de n�meros �mpares na quantidade dele mesmo. \n";
	cout << "Exemplo: Digitando 10, voc� encontrar� os primeiros 10 n�meros �mpares que s�o 1, 3, 5, 7, 9, 11, 13, 15, 17, e 19.\n\n";
	cout << "Digite um n�mero: \n";
	cin >> numero;
	
	contador = 0;
	impares = 1;		
			
	while ( contador <= numero ){
		
		cout << "\n" << impares;
		impares = impares + 2;
		contador++;
		
	
	}	
	system ("pause");
	
	return 0;
		
	}
		
