#include <iostream>

#include <locale.h>

using namespace std;

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	int linha, coluna;
	string matriz [2][3];
	
	matriz [0][0] = "1";
	matriz [0][1] = "2";
	matriz [0][2] = "3";
	matriz [1][0] = "4";
	matriz [1][1] = "5";
	matriz [1][2] = "6";
	
	for ( linha = 0; linha <2; linha++ ){
		
		for ( coluna = 0; coluna <3; coluna++ ){
			
			cout << matriz [linha][coluna] << " ";
						
		}
		
		cout << "\n";
	}
	
	
	
	
	system ("pause");
	
	return 0;
		
	}
	
