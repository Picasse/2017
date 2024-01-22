/*OBJETIVO: Crear una estructa para realizar el registro de 10 asignaturas
AUTOR: BRIAN SEBASTIAN CERES PINZON
FECHA: 13/10/2017*/

#include<iostream>
#include<string>
using namespace std;

struct asignatura
{
	char programa[50];
	int codigo;
	char nombre_asignatura[30];
	char nivel[10];
	int creditos;
	char tipo_asignatura[12];
}indas[10];

int main()
{
	for (int i = 0; i < 10; i++)
	{
		fflush(stdin);
		cout << "\n\t\tA S I G N A T U R A - " << i + 1<<endl<<endl;
		cout << "\n\tingrese los datos que se le pediran a continuacion para hacer el registro de sus asignaturas"<<endl;
		cout << "\n\tingrese el programa a cual usted pertenece: ";
		fflush(stdin);
		cin.getline(indas[i].programa, 50, '\n');
		cout << "\n\tIngrese su codigo: ";
		cin >> indas[i].codigo;
		fflush(stdin);
		cout << "\n\tingrese el nombre de la asignatura: ";
		cin.getline(indas[i].nombre_asignatura, 30, '\n');
		cout << "\n\tingrese el nivel de la asignatura: ";
		cin.getline(indas[i].nivel, 10, '\n');
		cout << "\n\tingrese el numero de creditos de la asignatura: ";
		cin >> indas[i].creditos;
		fflush(stdin);
		cout << "\n\tingrese el tipo de asignatura: ";
		cin.getline(indas[i].tipo_asignatura, 12, '\n');
		system("cls");
	}
	//imprimir datos
	for (int i = 0; i < 10; i++)
	{
		cout << "\n\t\tA S I G N A T U R A - " << i + 1<<endl;
		cout << "\n\tprograma: " << indas[i].programa;
		cout << "\n\tcodigo: " << indas[i].codigo;
		cout << "\n\tnombre de la asignatura: " << indas[i].nombre_asignatura;
		cout << "\n\tnivel de la asignatura: " << indas[i].nivel;
		cout << "\n\tcreditos de la asignatura: " << indas[i].creditos;
		cout << "\n\ttipo de la asignatura: " << indas[i].tipo_asignatura;
		cout << endl;
		cout << endl;
	}
	cout << endl;
	system("pause>Null");
	return 0;
}