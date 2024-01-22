/*OBJETIVO: Elaborar un programa en C++, que le permita almacenar los datos de las reservas de un teatro.
AUTOR: BRIAN SEBASTIAN CACERES PINZON
FECHA: 03/09/2017*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct cine
{
	long cedula;
	int codigo, cupos;
	string ubicacion;
}usuario;
int main()
{
	ifstream entrada;
	entrada.open("encargado.txt", ios::in);
	ofstream salida;
	salida.open("temp.txt", ios::out);

	if (entrada.fail())
	{
		cout << "hubo un error al abrir el archivo asistentes.txt";
		system("pause>Null");
	}
	else
	{
		int menu;
		cout << "Menu de opciones" << endl;
		cout << "1. Hacer una reserva" << endl;
		cout << "2. ubicar una reserva con cedula de ususario" << endl;
		cout << "3. eliminar o cancelar una reserva" << endl;
		cout << "ingrese una opcion: ";
		cin >> menu;

		switch (menu)
		{
		case 1: cout << "\tingreso de una reserva" << endl;
			entrada >> usuario.cedula >> usuario.codigo >> usuario.cupos >> usuario.ubicacion;
			cout << "ingrese la cedula del usuario: ";
			cin >> usuario.cedula;
			cout << "ingrese el codigo de la pelicula: ";
			cin >> usuario.codigo;
			cout << "ingrese los cupos: ";
			cin >> usuario.cupos;
			cout << "ingrese la ubicacion del los asientos: ";
			cin >> usuario.ubicacion;

			salida << usuario.cedula << " " << usuario.codigo << " " << usuario.cupos << " " << usuario.ubicacion;
			remove("encargado.txt");
			rename("temp.txt", "encargado.txt");
			salida.close();
			entrada.close();
			return 1;

			break;
		case 2: cout << "ubicar una reserva con la cedula del usuario";
			long aux;
			cout << "ingrese la cedula del usuario";
			cin >> aux;
			entrada >> usuario.cedula;
			while (!entrada.eof())
			{
				if (aux == usuario.cedula)
				{
					entrada >> usuario.cedula >> usuario.codigo >> usuario.cupos >> usuario.ubicacion;
					cout << "la cedula del usuario es " << usuario.cedula << endl;
					cout << "la pelicula que va a ver es la " << usuario.codigo << endl;
					cout << " los cupos que reservo son: " << usuario.cupos << " " << " en los asientos " << usuario.ubicacion;
					system("pause>Null");
					salida.close();
					entrada.close();
					return 1;
				}
				else
				{
					cout << "no se encuentra esta cedula";
					system("pause>Null");
					salida.close();
					entrada.close();
					return 1;
				}
				entrada >> usuario.cedula;
			}


			break;
		case 3: cout << "eliminar (cancelar) una reserva" << endl;
			long aux2;
			cout << "ingrese la cedula del usuario";
			cin >> aux2;
			entrada >> usuario.cedula;
			while (!entrada.eof())
			{
				entrada >> usuario.codigo >> usuario.cupos >> usuario.ubicacion;
				if (aux2 == usuario.cedula)
				{
					cout << "el usuario se ha eliminado";
					system("pause>Null");
				}
				else
				{
					salida << usuario.cedula << " " << usuario.codigo << " " << usuario.cupos << " " << usuario.ubicacion;
				}
				entrada >> usuario.cedula;
			}
			salida.close();
			entrada.close();

			remove("encargado.txt");
			rename("temp.txt", "encargado.txt");

			break;
		default:
			cout << "opcion no valida";
		}

		salida.close();
		entrada.close();
	}
	system("pause>Null");
	return 0;
}