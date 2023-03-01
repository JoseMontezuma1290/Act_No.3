#include <iostream>
using namespace std;
main(){
	//Num positivo>0 o negativo<0
	int num=0;
	
	cout<<"Ing. el Numero: ";
	cin>>num;
	
	if(num>0){ //>0
		//Ing. cada que se cumple la condicion
		cout<<"Num. Positivo: "<<num<<endl;
		
		}else{ //<=0
			if (num==0){ //0
			
			cout<<"Neutro"<<endl;
				}else{
				cout<<"Num. Negativo: "<<num<<endl;	
			}		
		}	
	

	/*if(num<0){
		//Ing. cada que se cumple la condicion
		cout<<"Num. Negativo: "<<num<<endl;
		
	}
	cout<<"Ambito General"<<endl;
	*/	
	
	 
	system("pause");
}

