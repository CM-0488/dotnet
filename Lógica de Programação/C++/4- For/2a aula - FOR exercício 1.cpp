#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int numero, pares, contador;
	

	for (contador = 1; contador <=10; contador++){
		
			cout << "Digite o n�mero: " << contador << "\n";
			cin >> numero;
			
			if ( numero % 2 == 0 ){
				
				pares++;	
				
			}
						
	
	} 
	
	cout << "N�meros pares digitados: " << pares << "\n";
	cout << "N�meros impares digitados: " << 10 - pares << "\n";
			
		
	system ("pause");
	
	return 0;
		
	}
	
