#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	double valordacompra, total;
	int codigo;
	
	recomecar: 
	
	cout << "Digite o valor integral da compra: " << "\n\n";
	cin >> valordacompra;
		
	cout << "\nDigite o c�digo do comprador: \n\n";
	cout << "1 - Cliente comum 0% de desconto \n\n";
	cout << "2 - Cliente VIP 5% de desconto \n\n";
	cout << "3 - Funcion�rio 10% de desconto \n\n";
	cin >> codigo;
		
	switch(codigo){
		
		
		case 1:
			
			//Cliente comum, sem desconto
			total = valordacompra; 
			cout << "Cliente Comum\n";			
			cout << "Valor total da compra: " << total << "\n\n";
		
			break;
			
		case 2:
			
			//Cliente VIP, com desconto de 5%		
			total = valordacompra - (valordacompra * 0.05);
			cout << "Cliente VIP\n";	
			cout << "Valor total da compra: " << total << "\n\n";
		
			break;
			
		case 3:
			
			//Funcion�rio, com desconto 10%			
			total = valordacompra - (valordacompra * 0.1);
			cout << "Funcion�rio\n";
			cout << "Valor total da compra: " << total << "\n\n";
		
			break;
	
		
		default:
			
			cout << "C�digo inv�lido. Digite um dos c�digos v�lidos. \n\n";
			
			break;
			
		goto recomecar;	
				
	
		
	}
	
	system ("pause");
	
	return 0;
	}
