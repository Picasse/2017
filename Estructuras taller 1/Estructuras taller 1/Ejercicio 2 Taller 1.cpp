/*OBJETIVO:	Elaborar un programa en el lenguaje de programación C++, que le permita a una estación
			de gasolina automatizar la información del personal que labora en la empresa.

AUTOR:		BRIAN SEBASTIAN CACERES PINZON
FECHA:		13/10/2017*/

#include<iostream>
#include<string>
using namespace std;

struct EstacionServicio
{
	char nombre[25];
	char apellido[25];
	double cedula;
	double sueldo;
	int edad;
}eds[25];

int main()
{
	//LLENADO DE DATOS

	int emp;
	cout << "\n\tDigite el numero de empleados: ";
	cin >> emp;
	system("cls");


	for (int i = 0; i < emp; i++)
	{
		cout << "\n\t\tDATOS DEL EMPLEADO " << i + 1<<endl;
		cout << "\n\tIngrese el nombre: ";
		fflush(stdin);
		cin.getline(eds[i].nombre, 25, '\n');
		cout << "\n\tIngrese el apellido: ";
		cin.getline(eds[i].apellido, 25, '\n');
		cout << "\n\tIngrese la cedula: ";
		cin >> eds[i].cedula;
		cout << "\n\tIngrese el sueldo basico: ";
		cin >> eds[i].sueldo;
		cout << "\n\tIngrese la edad: ";
		cin >> eds[i].edad;
		system("cls");
	}

	//MOSTRAR EN PANTLLA
	cout << "\n\t\tD A T O S   D E   L O S   E M P L E A D O S " << endl;
	for (int i = 0; i < emp; i++)
	{
		cout << "\n\tDATOS DEL EMPLEADO " << i + 1 ;
		cout << "\n\tNombre: " << eds[i].nombre;
		cout << "\n\tApellido: " << eds[i].apellido;
		cout << "\n\tCedula: " << eds[i].cedula;
		cout << "\n\tSueldo basico: " << eds[i].sueldo;
		cout << "\n\tEdad: " << eds[i].edad;
		cout << endl;
	}

	system("pause>Null");
	return 0;
}