#include<iostream>
#include<string>

using namespace std; 

int main()
{
	string sexo;
	int edad, pulsaciones;
	cout<<"Ingrese su genero: ";
	cin>>sexo;
	cout<<"Ingrese su edad actual: ";
	cin>>edad;
	if(sexo=="Femenina")
	{
		pulsaciones=(220-edad)/10.;
	} else if(sexo=="Masculino")
	{
		pulsaciones=(210-edad)/10.;
	}
	else
	{
		cout<<"Dato invalido"<<endl;
	}
	cout<<"pulsaciones por cada 10 segunda es: "<<pulsaciones<<endl;
	return 0;
}
