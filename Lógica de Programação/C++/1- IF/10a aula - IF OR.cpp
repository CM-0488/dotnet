#include <iostream>

#include <locale.h>

using namespace std;

int main (){
	
	setlocale (LC_ALL, "");
	
	string fruta;
	
	fruta = "Ma��";
				
	if ( fruta == "Ma��" || fruta == "Banana" ){
		
		cout << "Fruta: " << fruta << "\n";
		cout << "A fruta � Ma�� ou Banana\n\n";
	
	}else{
		
		cout << "Fruta: " << fruta << "\n";
		cout << "A fruta n�o � Ma�� nem Banana\n\n";
			
	}
			
	system ("pause");
	
	return 0;
	
}
