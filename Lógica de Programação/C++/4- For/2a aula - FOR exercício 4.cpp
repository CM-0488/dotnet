#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int fatorial, numero, contador;
	
	fatorial = 1;
	
	cout << "Digite um n�mero: " << "\n";
	cin >> numero;
		
	for (contador = numero; contador >= 1; contador--){
		
	fatorial *= contador;
			
	} 
	
	cout << "\nO fatorial de " << numero << " � " << fatorial << "\n";
	
	system ("pause");
	
	return 0;
		
	}
	
