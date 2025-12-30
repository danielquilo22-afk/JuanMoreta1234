//*Aspirantes a las fuezas armadas*//
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int edad;
	float promedio, estatura;
	char genero;
	
	cout<<"**Aspirante Fuerzas Armadas"<<endl;
	cout<<"Selccione genero"<<endl;
	cout<<"Genero: Hombre='h'o Mujer='m'"<<endl;
	cin>>genero;
    cout<<"Ingrese edad"<<endl;
	cin>>edad;
    cout<<"Ingrese estatura"<<endl;
    cin>>estatura;
	cout<<"Ingrese promedio"<<endl;
    cin>>promedio;	
	
	if(genero=='h')
	{
		if(edad>=18 && estatura>=1.75 && promedio>=8)
		{
			cout<<"Es aspirante a las Fuerezas Armadas"<<endl;	
		}    
		else
		{
			cout<<"No es aspirante a las Fuerzas Armadas"<<endl;
			
		}
	}
	if(genero=='m')
	{
		if(edad>=18 && estatura>=1.65 && promedio>=8)
		{
		cout<<"Es aspirante a las Fuerezas Armadas";
		}
		else
		{
			cout<<"No es aspirante a las Fuerzas Armadas"<<endl;
		}
	}
	system("pause");	
}

