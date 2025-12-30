#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string usuario, contrasena, color, tipo;
    int intentos = 0, op, num;
    float pago, d;
    bool ingresa = false;

    // LOGIN
    do {
        cout << "\nIngrese el usuario: ";
        getline(cin, usuario);
        cout << "Ingrese la contrasena: ";
        getline(cin, contrasena);

        if (usuario == "juan" && contrasena == "juan2009") {
            ingresa = true;
        } else {
            cout << "\nEl usuario y/o contrasena son incorrectos\n";
            intentos++;
        }
    } while (!ingresa && intentos < 3);

    if (!ingresa) {
        cout << "\nIntentelo en otra ocasion\n";
        return 0;
    } else {
        cout << "\nBienvenido: " << usuario << "\n";
    }

    system("cls");

    // MENU
    do {
        cout << "\n==== MENU ====\n";
        cout << "1. Seleccionar un color\n";
        cout << "2. Calcular un descuento con tipo de moneda\n";
        cout << "3. Cantidad en miles\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> op;

        system("cls");

        switch (op) {
            case 1:
                cout << "Ingrese la inicial de un color (r, v, a): ";
                cin >> color;

                if (color == "r")
                    cout << "\nEl color es rojo\n";
                else if (color == "v")
                    cout << "\nEl color es verde\n";
                else if (color == "a")
                    cout << "\nEl color es amarillo\n";
                else
                    cout << "\nEsa opcion no existe\n";
                break;

            case 2:
                cout << "\nIngrese el valor de pago: $";
                cin >> pago;
                cout << "Ingrese el tipo de pago (dolar, euro, libra): ";
                cin >> tipo;

                if (tipo == "dolar")
                    d = pago * 0.10;
                else if (tipo == "euro")
                    d = pago * 0.05;
                else if (tipo == "libra")
                    d = pago * 0.15;
                else {
                    cout << "Esa moneda no es valida\n";
                    break;
                }

                cout << "\n===== FACTURA =====\n";
                cout << "Tipo de pago: " << tipo << endl;
                cout << "Valor de compra: $" << pago << endl;
                cout << "Descuento: $" << d << endl;
                cout << "Pago total: $" << pago - d << endl;
                break;

            case 3:
                cout << "Ingrese un numero (1/2/3): ";
                cin >> num;

                switch (num) {
                    case 1: cout << "Es 1000\n"; break;
                    case 2: cout << "Es 2000\n"; break;
                    case 3: cout << "Es 3000\n"; break;
                    default: cout << "No existe\n"; break;
                }
                break;

            case 4:
                cout << "\nAdios!\n";
                break;

            default:
                cout << "Opcion no valida\n";
                break;
        }

    } while (op != 4);

    system("pause");
    return 0;
}
