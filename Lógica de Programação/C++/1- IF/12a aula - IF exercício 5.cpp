#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1, numero2, numero3;
	
	cout << "Digite o 1� n�mero: \n";
	cin >> numero1;
	
	cout << "\nDigite o 2� n�mero: \n";
	cin >> numero2;
	
	cout << "\nDigite o 3� n�mero: \n";
	cin >> numero3;
	
	if ( numero1 > numero2 && numero1 > numero3 ){
		
		cout << "\nO n�mero " << numero1 << " � o maior.\n";
		
		
	}else if ( numero2 > numero1 && numero2 > numero3 ){
		
		cout << "\nO n�mero " << numero2 << " � o maior.\n";

	
	}else{
		
		cout << "\nO n�mero " << numero3 << " � o maior.\n";  
		
	}
	
		if ( numero1 < numero2 && numero1 < numero3 ){
		
		cout << "\nO n�mero " << numero1 << " � o menor.\n";
		
		
	}else if ( numero2 < numero1 && numero2 < numero3 ){
		
		cout << "\nO n�mero " << numero2 << " � o menor.\n";

	
	}else{
		
		cout << "\nO n�mero " << numero3 << " � o menor.\n";  

	system ("pause");
	
	return 0;
	}


}
