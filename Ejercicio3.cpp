//*Programa con sentencia while*//

#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int estudiantes,h = 0, m = 0, e = 0;
	char gen;
	string nombre,apellido;
	
	cout<<"Total de estudiantes en un curso"<<endl;
	cout<<"Ingrese numero de estudiantes"<<endl;
		cin>>estudiantes;
	while(e<estudiantes)
	{
		cout<<"Ingrese Nombre y Apellido "<<endl;
		cin>>nombre;
		cin>>apellido;
		cout<<"Seleccione genero: Hombre='H' Mujer='M' "<<endl;
		cin>>gen;
		    if(gen=='H') 
		       h++;
		    if(gen=='M')
		       m++;
		    
		e++;
	}
	cout<<"Estudiantes hombres:"<<h<<endl;
	cout<<"Estudiantes mujeres:"<<m<<endl;
	cout<<"total de estudiantes:"<<estudiantes<<endl;
	getch();
	return 0;
	
}
