#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1, numero2;
		
	numero1 = 35;
	
	cout << "Digite um n�mero: \n";
	cin >> numero1;
	
	if ( numero1 > 35 ){ 
		
	cout << "O n�mero digitado � maior que 35 \n\n";
	
	} else {

	cout << "O n�mero digitado � menor que 35 \n\n";
	
}	
		
	system ("pause");
	
	return 0;
}



