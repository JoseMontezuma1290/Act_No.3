#include <iostream>
using namespace std;
main(){
	//Determinar si un numero es par o impar
	int num=0;
	cout<<"Ingrese Numero; ";
	cin>>num;
	// dividir un numero entre dos su residuo es cero entonces es par caso contrario es impar
	if((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar";
	}
	
	
	system("pause");
}
