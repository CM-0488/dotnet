#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int valorasacar, dez, cinquenta, cem, resto;
	
	cout << "Notas dispon�veis: 10, 50 e 100 " << "\n" << "Valor a sacar (at� 2000$): " << "\n";
	cin >> valorasacar;
	
	if ( valorasacar < 10 or valorasacar > 2000 ){
		
		cout << "Valor indispon�vel" << "\n";  
		
		
	}else{ 
		
		cem = valorasacar / 100;
		cout << "Resultado 100: " << cem << "\n";
		
		valorasacar -= cem * 100;
		cout << "Resultado saque: " << valorasacar << "\n";
		
		cinquenta = valorasacar / 50;
		cout << "Resultado 50: " << cinquenta << "\n";
		
		valorasacar -= cinquenta * 50;
		cout << "Resultado saque: " << valorasacar << "\n";
		
		dez = valorasacar / 10;
		cout << "Resultado 10: " << dez << "\n";
		
		valorasacar -= dez * 10;
		cout << "Resultado saque: " << valorasacar << "\n";
		
		resto = valorasacar;
		
				
			if ( resto >= 10 ){
				
				cout << "Valor indispon�vel" << "\n";
				
			}else{
				
				if ( cem > 0 ){
				cout << "Nota(s) de 100$: "	<< cem << "\n";
									
				}
				
				
				if ( cinquenta > 0 ){
				cout << "Nota(s) de 50$: "	<< cinquenta << "\n";
									
				}
				
				if ( dez > 0 ){
				cout << "Nota(s) de 10$: " << dez << "\n";
									
				}
												
			}
				

	system ("pause");
	
	return 0;
	}


}
