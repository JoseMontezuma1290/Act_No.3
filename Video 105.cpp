#include <iostream>
using namespace std;
main(){
	

	int codigo=0;
	cout<<"Ingrese codigo de area: ";
	cin>>codigo;
	switch(codigo){
		
		case 501 :
			cout<<"Belice";
			break;
		case 502 :
			cout<<"Guatemala";
			break;
		case 503 :
			cout<<"El Salvador";
			break;
		case 504 :
			cout<<"Honduras";
			break;
		case 505 :
			cout<<"Nicaragua";
			break;
		case 506 :
			cout<<"Costa Rica";
			break;
		case 507 :
			cout<<"Panama";
			break;
			default:
				cout<<"Este codigo no es de centroamerica"<<endl;
	}

	system("pause");
}
