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
	cout<<"El numero de pulsaciones por persona por cada 10 segundos es: "<<pulsaciones<<endl;
	return 0;
}
