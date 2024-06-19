#include<iostream>
#include<string>
#include<cmath>

using namespace std; 

double IndiceDeMasaCorporal(double peso, double altura)
{
	
	double IMC;
	IMC=peso/pow(altura,2);
	return IMC;
}

int main()
{
	cout<<"\nBienvenido al programa"<<endl;
	string genero;
	int edad, pulsaciones;
	float imc, peso, altura;	
	cout<<"\nIngrese su genero(Masculino/Femenino): ";
	cin>>genero;
	cout<<"Ingrese su edad actual: ";
	cin>>edad;
	cout<<"Ingrese su peso (kg): ";
	cin>>peso;
	cout<<"Ingrese su altura (m): ";
	cin>>altura;
	if(genero=="Femenina")
	{
		pulsaciones=(220-edad)/10.;
	
	} else if(genero=="Masculino")
	{
		pulsaciones=(210-edad)/10.;
	}
	else
	{
		cout<<"Dato invalido"<<endl;
	}
	imc==IndiceDeMasaCorporal(peso,altura);
	
	cout<<"\nDatos obtenidos";
	cout<<"\nGenero: "<<genero<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"Indice de Masa corporal: "<<imc<<endl;
	cout<<"El numero de pulsaciones por cada 10 segundos es: "<<pulsaciones<<endl;
	cout<<"\nObservaciones: "<<endl;
		if(imc<18.5)
	{
		cout<<"Usted esta con bajo peso";
	}
	else
	{
		if(imc<=18.5 and imc <=24.9)
		{
			cout<<"Usted esta con peso normal";

		}
		else
		{
			if(imc<=25 and imc<=29.9)
			{
				cout<<"Usted esta con sobrepeso";

			}
			else
			{
				if(imc>=30)
				{
					cout<<"Usted esta  con obesidad";

				}
			}
		}
	}
	return 0;
}
