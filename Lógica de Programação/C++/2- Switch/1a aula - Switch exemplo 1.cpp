#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "Portuguese");
	
	int escolha;
	
	recomecar:
	
	cout << "Na sua opini�o, qual pa�s tem a melhor qualidade de vida?" << "\n";
	cout << "1 - Alemanha\n";
	cout << "2 - �ustria\n";			
	cout << "3 - B�lgica\n";
	cout << "4 - Canad�\n";
	cout << "5 - Dinamarca\n";
	cout << "6 - Eslov�quia\n";
	cout << "7 - Finl�ndia\n";
	cout << "8 - Holanda\n";
	cout << "9 - Inglaterra\n";
	cout << "10 - Noruega\n";
	cout << "11 - Portugal\n";
	cout << "12 - Su��a\n";
	cout << "13 - Su�cia\n\n";
	cin >> escolha;
	
	switch (escolha){
		
		case 1:
			cout << "\nOp��o escolhida: 1, Alemanha " << "\n\n";
			
			break;
			
		case 2:
			cout << "\nOp��o escolhida: 2, �ustria " << "\n\n";
			
			break;
			
		case 3:
			cout << "\nOp��o escolhida: 3, B�lgica " << "\n\n";
			
			break;
			
		case 4:
			cout << "\nOp��o escolhida: 4, Canad� " << "\n\n";
			
			break;
			
		case 5:
			cout << "\nOp��o escolhida: 5, Dinamarca " << "\n\n";
			
			break;
			
		case 6:
			cout << "\nOp��o escolhida: 6, Eslov�quia " << "\n\n";
			
			break;
			
		case 7:
			cout << "\nOp��o escolhida: 7, Finl�ndia " << "\n\n";
			
			break;
			
		case 8:
			cout << "\nOp��o escolhida: 8, Holanda " << "\n\n";
			
			break;
			
		case 9:
			cout << "\nOp��o escolhida: 9, Inglaterra " << "\n\n";
			
			break;
			
		case 10:
			cout << "\nOp��o escolhida: 10, Noruega " << "\n\n";
			
			break;
			
		case 11:
			cout << "\nOp��o escolhida: 11, Portugal " << "\n\n";
			
			break;
			
		case 12:
			cout << "\nOp��o escolhida: 12, Su��a " << "\n\n";
			
			break;
			
		case 13:
			cout << "\nOp��o escolhida: 13, Su�cia " << "\n\n";
			
			break;
			
	
		default:
			cout << "\nEscolha inv�lida, escolha uma das op��es da lista. " << "\n\n";
			
		goto recomecar;
		
	}
	
	system ("pause");
	
	return 0;
	}



