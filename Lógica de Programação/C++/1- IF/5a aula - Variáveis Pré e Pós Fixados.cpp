#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	int numero1 = 10;
	
	cout << "-- N�mero inicial --\n";	
	cout << "N�mero: " << numero1 << "\n\n";
		
	
	numero1*=2;
	
	cout << "-- N�mero Multiplicado --\n";
	cout << "N�mero: " << numero1 << "\n\n";


	numero1/=4;

	cout << "-- N�mero Dividido --\n";
	cout << "N�mero: " << numero1 << "\n\n";	
	
	
	//p�s fixado 
	numero1 = 100;
	
	cout << "\n ----- P�s Fixado ---- \n";
	cout << "N�mero = 100" << "\n";
	cout << "N�mero = " << numero1++ << "\n";
	cout << "N�mero = " << numero1 << "\n";
	
	
	//pr� fixado
	numero1 = 100;
	
	cout << "\n ----- Pr� Fixado ----- \n";
	cout << "N�mero = 100" << "\n";
	cout << "N�mero = " << ++numero1 << "\n";
		
	
		
	system ("pause");
	
	return 0;
}
