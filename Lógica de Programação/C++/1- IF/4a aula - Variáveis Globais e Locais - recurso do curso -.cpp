#include <iostream> //Entrada e sa�da de dados

#include <locale.h> //Para trabalhar com acentos

//Organiza��o de pastas e poder usar o cout, cin e endl
using namespace std;

//VG = Vari�vel Global - Acessamos dentro de outras fun��es
double nota1VG, nota2VG;

int main(){
	
	//Biblioteca respons�vel pelos acentos nas letras e palavras
	setlocale(LC_ALL, "Portuguese");
	
	//VL = Variavies Locais - Acessamos apenas dentro da nossa fun��o
	double nota3VL, nota4VL, media;
	
	nota1VG = 9;
	nota2VG = 10;
	nota3VL = 5;
	nota4VL = 10;
	
	
	media = (nota1VG + nota2VG + nota3VL + nota4VL ) / 4;
	
	cout << "N�dia: " << media << "\n";
	
	
	
	//Impede o fechamento da tela ap�s execu��o do c�digo para dar tempo de testarmos e ver o resultado
	system("pause");
	
	//Tipo de retorno da fun��o main que � um inteiro
	return 0;
}
