//*USUARIO Y CONTRASENIA PARA INGREGAR AL MENU//*
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	float desc,vc,vcd;
	int op,num;
	char color,tm,cls;
	
	cout<<"Inicie sesion"<<endl;
	string usuario, contrasenia;
	cout<<"Ingrese usuario"<<endl;
	cin>>usuario;
	cout<<"Ingrese contraseña"<<endl;
	cin>>contrasenia;
	if(usuario=="juan"&& contrasenia=="juan123")
	{
		cout<<"Sesion iniciada"<<endl;
		cout<<"INGRESO EXITOSO AL MENU"<<endl;
		cout<<"***Escoja que le gustaria realizar***"<<endl;
	
	cout<<"1. Seleccione color"<<endl;
	cout<<"2. Valor de compra y tipo de moneda de pago"<<endl;
	cout<<"3. cantidad en miles"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<" Escoja opcion :)"<<endl;
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<"Ingrese inicial de color:"<<endl;
			cin>>color;
			if(color=='r')
			    {
				cout<<"rojo"<<endl;
			    }
				else if(color=='v')
				{
					cout<<"verde"<<endl;
				}
				else if(color=='a')
				{
					cout<<"amarillo"<<endl;
				}
				
			else
			{
				cout<<"No valido"<<endl;
			}
			break;
			
			case 2:
				cout<<"Ingrese valor de la compra"<<endl;
				cin>>vc;
				cout<<"Ingrese tipo de moneda:d=dolar,l=libra,e=euro:"<<endl;
				cin>>tm;
				if(tm=='d')
				{
					cout<<"Descuento del 10%"<<endl;
					desc=vc*0.10;
					cout<<"El descuento es de: "<<desc<<endl;
					vcd=vc-desc;
					cout<<"El valor con descuento es:"<<vcd<<endl;
				}
				  else if (tm=='l')
				{
					cout<<"Descuento del 15%"<<endl;
					desc=vc*0.15;
					cout<<"El descuento es de: "<<desc<<endl;
					vcd=vc-desc;
					cout<<"El valor con descuento es:"<<vcd<<endl;
				}
				  else if (tm=='e')
				{
					cout<<"Descuento del 5%"<<endl;
					desc=vc*0.05;
					cout<<"El descuento es de: "<<desc<<endl;
					vcd=vc-desc;
					cout<<"El valor con descuento es:"<<vcd<<endl;
					
				}
				else
				{
					cout<<"Opcion no valida";
				}
				break;
				
				case 3:
					cout<<"Ingrese numero:"<<endl;
					cin>>num;
					if(num==1)
					{
						cout<<"El valor es 1000"<<endl;						
					}
					 else if(num==2)
					{
					cout<<"El valor es 2000"<<endl;	
					}
					 else if(num==3)
					{
					cout<<"El valor es 3000"<<endl;	
					}
					else
					{
						cout<<"Opcion no valida"<<endl;
					}
					break;
					case 4:
						cout<<"Salir"<<endl;
						break;
						default:
                 	cout<<"Opcion no valida"<<endl;
	}
	
	}
	 else
	 {
	 	cout<<"NO SE A PODIDO INGRESAR"<<endl;
	 }
	 system("pause");
}

	
		

		
	
