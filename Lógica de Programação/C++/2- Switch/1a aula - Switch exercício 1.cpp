#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	double numero1, numero2;
	int opcao;
	
	cout << "Digite o 1o n�mero " << "\n\n";
	cin >> numero1;
	
	cout << "\nDigite o 2o n�mero " << "\n\n";
	cin >> numero2;
	
	recomecar:
	
	cout << "\nEscolha uma das op��es: \n\n";
	cout << "1 - Somar\n";
	cout << "2 - Multiplicar\n";
	cout << "3 - Dividir\n";
	cout << "4 - Subtrair\n\n";
	cin >> opcao;
	
	switch (opcao){
	
		
		case 1:
						
			cout << "\nResultado: " << numero1 + numero2 << "\n\n";
		
			break;
			
		case 2:
			
			cout << "\nResultado: " << numero1 * numero2 << "\n\n";
		
			break;
	
		
		case 3:
		
			cout << "\nResultado: " << numero1 / numero2 << "\n\n";
				
			break;
			
		case 4:
		
			cout << "\nResultado: " << numero1 - numero2 << "\n\n";
		
			break;		
			
			default: 
				cout << "Op��o inv�lida, escolha uma das op��es da lista.\n\n";
				
		goto recomecar;	
		
	}
	
	system ("pause");
	
	return 0;
	}
