#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string letra, mensagem;
	
	cout << "Digite uma letra: \n";
	cin >> letra;
	
	( letra == "C" ) ? mensagem = "Voc� digitou a letra C\n\n" : mensagem = "Voc� n�o digitou a letra C\n\n";
	
	cout << "\nLetra digitada: " << letra << "\n";
	cout << "Resultado: " << mensagem << "\n";
			
			
	system ("pause");
	
	return 0;
	
}
