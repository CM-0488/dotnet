#include <iostream>
#include <locale.h>

using namespace std;

int somar3n(int numero1, int numero2, int numero3);

int main(){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int n1, n2, n3, soma;
	
	cout << "Digite o primeiro n�mero:  ";
	cin >> n1;
	
	cout << "Digite o segundo n�mero:  ";
	cin >> n2;

	cout << "Digite o terceiro n�mero:  ";
	cin >> n3;

	soma = somar3n(n1, n2, n3);
	
	cout << "\nTotal soma 3 n�meros: " << soma << "\n";
			
	system ("pause");
	
	return 0;
		
	}

	int somar3n(int numero1, int numero2, int numero3){
		
		return numero1 + numero2 + numero3;
		
	}		
