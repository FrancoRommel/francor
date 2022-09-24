#include<iostream>
using namespace std;

int main()
{
	int RRFE_i=0,RRFE_l;
	float RRFE_x,RRFE_s=0;
	cout<<"ingrese el limite RRFE_l="; cin>>RRFE_l;
	do{
		
	cout<<"ingrese el numero RRFE_x="; cin>>RRFE_x;
	RRFE_i=RRFE_i+1;
	RRFE_s=RRFE_s+RRFE_x;



	}while(RRFE_i<RRFE_l);
	cout<<"Se ingresaron "<<RRFE_l<<" numeros "<< "que sumaron "<<RRFE_s<<endl;
	return 0;



}
