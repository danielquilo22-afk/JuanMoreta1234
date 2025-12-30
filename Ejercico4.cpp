#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
    int n1, r = 0;
    cout << "Suma de numero impares: "<<endl;
    do 
	{
        cout << "Ingrese un numero impar: "<<endl;
        cin >> n1;

        if (n1 % 2 != 0) 
		{ 
            r += n1;
        }
    } 
	while (n1 != 0);

    cout << "La suma de los numeros impares es: " << r << endl;

    return 0;
}
