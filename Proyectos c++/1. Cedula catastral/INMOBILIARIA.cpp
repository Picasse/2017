/*OBJETIVOS: Elaborar un programa en C++, que le permita a una inmobiliaria almacenar los datos de
			 algunas edificaciones que maneja.
	AUTOR:	 BRIAN SEBASTIAN CACERES PINZON
	FECHA:	 13/10/2017*/
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main()
{
	int catastral;
	string direccion;
	int construc;
	int lote;
	long cedula;
	long precio;
	string barrio;

	ifstream entrada;
	entrada.open("edificacion.txt", ios::in);

	if (entrada.fail())
	{
		cout << " Hay un error al abrir este archivo";
		system("pause>Null");
	}
	else
	{
		int x;
		cout << "\n\t Ingrese la cedula catastral (1 o 2) del predio: ";
		cin >> x;

		entrada >> catastral;
		system ("cls");
		while (!entrada.eof())
		{
			entrada >> direccion >> construc >> lote >> cedula >> precio >> barrio;
			if (x == catastral)
			{
				cout << " Los datos de su vivienda son: " << endl << endl;
				cout << " Cedula catastral: " << catastral << endl;
				cout << " Direccion: " << direccion << endl;
				cout << " Area construida: " << construc << endl;
				cout << " El area del lote es: " << lote << endl;
				cout << " La cedula del dueño es: " << cedula << endl;
				cout << " El precio de la vivienda es: " << precio << endl;
				cout << " El barrio donde se encuentra ubicada la vivienda es: " << barrio << endl;
				cout << endl;
				system("pause");
				entrada.close();
				return 1;
				cin >> x;
			}
			entrada >> catastral;
		}
	}
system("pause>Null");
return 0;
}