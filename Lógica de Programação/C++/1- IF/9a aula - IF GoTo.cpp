#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero;
	
	recomecar:
	
	cout << "Digite um n�mero entre 1 e 10\n";
	cin >> numero;
			
	if ( numero >= 1 && numero <= 10 ){
		
		cout << "\nO n�mero " << numero << " est� entre 1 e 10\n\n";
	
					
	}else{

		cout << "\nO n�mero " << numero << " n�o est� entre 1 e 10\n\n";
		goto recomecar;
			
	}
			
	system ("pause");
	
	return 0;
	
}
