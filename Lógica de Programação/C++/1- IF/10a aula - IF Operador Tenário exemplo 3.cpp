#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string sexo;
	int preco;
	
	preco = 10;
	
	cout << "Digite o seu sexo: \n";
	cin >> sexo;
	
	// ++ significa soma do pre�o +1 e -= significa pre�o - o n�mero digitado depois do sinal de =, que pode ser qualquer outro n�mero que eu queira usar
	( sexo == "Masculino" ) ? preco++ : preco-=3;
	
	cout << "\nSexo: " << sexo << "\n";
	cout << "Pre�o a pagar: " << preco << "$\n\n";
	
	
	system ("pause");
	
	return 0;
	
}
