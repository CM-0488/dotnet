#include <iostream>
#include <locale.h>

using namespace std;

void funcaomensagem();

int main (){	
	
	setlocale (LC_ALL, "Portuguese");
		
	funcaomensagem();
	
			
	system ("pause");
	
	return 0;
		
	}
	
	void funcaomensagem(){
		
		cout << "Curso de L�gica de Programa��o!\n\n";
		
	}
	
		
		
