#include <iostream>
using namespace std;
main(){
	//and (y) @@
	//or (o) ||
	
	
	char lapiz,lapicero, cuaderno;
	cout<<"trae Lapiz (s/n): ";
	cin>>lapiz;
	cout<<"trae Lapicero (s/n): ";
	cin>>lapicero;
	cout<<"trae cuaderno (s/n): ";
	cin>>cuaderno;
	//puede entrar a mi clase si usted trae un lapiz y un lapicero
	// and = el valor es verdadero si ambos son verdaderos
	//puede entrar a mi clase si usted trae un lapiz y un lapicero	
	// ir (0) el valor es verdadero si por lo menos una es verdera
	
	// puede entrar a mi clase si usted trae un lapiz o un lapicero y un cuaderno
	if ((lapiz=='s' || lapicero=='s')&& cuaderno){
		cout<<"Ingresa"<<endl;
	}else{
		cout<<"Lo siento no puede Ingresar"<<endl;
		
	}
	

	system("pause");
}
