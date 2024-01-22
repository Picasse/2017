/*OBJETIVO: Elaborar un programa que mediante un  menu de opciones de al usuario la posibilidad de hacer conversiones entre numeros decimal, octal y binario
FECHA: 18/05/2017
AUTOR:Brian Sebastian Caceres Pinzon*/

#include <iostream>
using namespace std;
int dectobin(int, int[]);
int dectooct(int, int[]);

int main()
{
	int opcion;
	cout << " \n\n\n\t\t   MENU DE FORMULAS DE CONVERSION   ";
	cout << "\n\n";
	cout << "\t 1. DECIMAL A BINARIO \n\n ";
	cout << "\t 2. DECIMAL A OCTAL \n\n ";
	cout << "\t 3. DECIMAL A HEXADECIMAL \n\n ";
	cout << "\t 4. BINARIO A DECIMAL \n\n ";
	cout << "\t 5. OCTAL A DECIMAL \n\n ";
	cout << "\t 6. HEXADECIMAL A DECIMAL \n\n ";
	cout << "\n\t QUE FUNCION DESEA APLICAR? DIGITE UNA OPCION DEL MENU ";
	cin >> opcion;
	cout << "\n\n";
	system("cls");

	switch (opcion)
	{//INICIO DEL SWITCH
	//variables usadas x,y,n,k,d,f
	case 1: cout << "\n\n\n\t\t CONVERSION NUMEROS DECIMALES A BINARIOS \n\n";
			int num, bin1[20], binfin[20], n = 0, k = 0;
			//INGRESAR DATOS
			cout << "\t INGRESE EL NUMERO A CONVERTIR: ";
			cin >> num;
			n = dectobin(num, bin1);//LLAMAR LA FUNCION
			cout << "\n\n";
			system("cls");

			//MOSTRAR EL RESULTADO
			cout << "\n\n";
			cout << "\t EL BINARIO CORRESPONDIENTE ES: ";
			for (k = 1; k <= n; k++)
			{
				binfin[k] = bin1[n - k];
				cout << " " << binfin[k] << "  ";
			}
			cout << "\n\n";

			break;


	}// FIN DEL SWITCH

	cout << "\n\n\t";
	system("pause");
	return 0;
}// FIN DEL PROGRAMA

//ESTRUCTURA PARA CONVERTIR DECIMALES A BINARIOS
int dectobin(int x, int y[])
{
	int n = 0;
	do
	{
		y[n] = x % 2;
		x = x / 2;
		n++;
	} while (x > 0);
	return n;
}
