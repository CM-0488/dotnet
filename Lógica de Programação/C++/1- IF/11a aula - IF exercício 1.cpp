#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero;
	
	numero = 0;
	
	cout << "Digite um n�mero positivo ou negativo:\n";
	cin >> numero;
	
	if ( numero > 0 ){
		
		cout << "\nO n�mero " << numero << " � positivo.\n\n";
	
	}else if ( numero < 0 ){

		cout << "\nO n�mero " << numero << " � negativo.\n\n";

	}else{ 

		cout << "\nO n�mero " << numero << " � neutro.\n\n";

	}
		
	system ("pause");
	
	return 0;
	
}
