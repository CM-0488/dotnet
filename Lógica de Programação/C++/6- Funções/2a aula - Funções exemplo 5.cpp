#include <iostream>
#include <locale.h>

using namespace std;
void contagem (int numero, int vezes=1);


int main(){	
setlocale (LC_ALL, "Portuguese");

	int contador;
	contador = 1;
	
	cout << "----- N�meros While -----\n\n";
	
	while ( contador < 11 ) {
		
		cout << "N�mero While: " << contador << "\n";
		contador++;
		
	}
	
	cout << "\n\n----- N�meros Fun��o -----\n\n";	
	contagem (10);
						
	system ("pause");
	
	return 0;
		
	}

	void contagem (int numero, int vezes) {

		cout << "N�mero Fun��o: " << vezes << "\n";
		
		if ( numero > vezes ){
			
			contagem (numero, ++vezes);
			
			
		}
		
		
	}

