#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	double CCSD, CVCD5, CFCD10, valordacompra, codigo;
		
	CCSD = valordacompra;
	CVCD5 = valordacompra - (valordacompra * 0.05);
	CFCD10 = valordacompra - (valordacompra * 0.10);
	
	recomecar: 
	
	cout << "Digite o valor integral da compra: " << "\n\n";
	cin >> valordacompra;
		
	cout << "\nDigite o c�digo do comprador: \n\n";
	cout << "CCSD - Cliente comum 0% de desconto \n\n";
	cout << "CVCD5 - Cliente VIP 5% de desconto \n\n";
	cout << "CFCD10 - Funcion�rio 10% de desconto \n\n";
	cin >> codigo;
		
	switch(codigo){
		
		
		case 1:
			
			//Cliente comum, sem desconto
			cout << "Cliente Comum\n";			
			cout << "Valor total da compra: " << CCSD << "\n\n";
		
			break;
			
		case 2:
			
			//Cliente VIP, com desconto de 5%		
			cout << "Cliente VIP\n";	
			cout << "Valor total da compra: " << CVCD5 << "\n\n";
		
			break;
			
		case 3:
			
			//Funcion�rio, com desconto 10%			
			cout << "Funcion�rio\n";
			cout << "Valor total da compra: " << CFCD10 << "\n\n";
		
			break;
	
		
		default:
			cout << "C�digo inv�lido. Digite um dos c�digos v�lidos. \n\n";
			
			break; 
			
			
		goto recomecar;	
				
	
		
	}
	
	system ("pause");
	
	return 0;
	}
