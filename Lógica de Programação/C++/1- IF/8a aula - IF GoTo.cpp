#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string capital;
	
	recomecar:
			
	cout << "Qual � a Capital da China? \n";
	cin >> capital;
		
	if ( capital == "Pequim" ){
		
		cout << "\nVoc� acertou! A capital da China � Pequim, ou Beijing. Localizada no Norte do pa�s e uma das cidades mais populosas do mundo, com 21 milh�es de habitantes.\n\n";
		
		
	}else if ( capital == "pequim" ){
		
		cout << "\nVoc� acertou! A capital da China � Pequim, ou Beijing. Localizada no Norte do pa�s e uma das cidades mais populosas do mundo, com 21 milh�es de habitantes.\n\n";
		
	
	}else if ( capital == "PEQUIM" ){
		
		cout << "\nVoc� acertou! A capital da China � Pequim, ou Beijing. Localizada no Norte do pa�s e uma das cidades mais populosas do mundo, com 21 milh�es de habitantes.\n\n";
	
	
	}else if ( capital == "Beijing" ){
			
		cout << "\nVoc� acertou! A capital da China � Pequim, ou Beijing. Localizada no Norte do pa�s e uma das cidades mais populosas do mundo, com 21 milh�es de habitantes.\n\n";
	
	
	}else if ( capital == "beijing" ){
			
		cout << "\nVoc� acertou! A capital da China � Pequim, ou Beijing. Localizada no Norte do pa�s e uma das cidades mais populosas do mundo, com 21 milh�es de habitantes.\n\n";
	
	
	}else if ( capital == "BEIJING" ){
			
		cout << "\nVoc� acertou! A capital da China � Pequim, ou Beijing. Localizada no Norte do pa�s e uma das cidades mais populosas do mundo, com 21 milh�es de habitantes.\n\n";
	
				
	}else{

		cout << "\n";
		goto recomecar;
	
	}
	
		
	system ("pause");
	
	return 0;
}
