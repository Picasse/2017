/*OBJETIVO: ELABORAR UN PROGRAMA QUE CALCULE: SUMA, PROMEDIO, MAYOR Y MENOR ENTRE 10 NUMEROS ENTEROS COMPRENDIDOS ENTRE 10 Y 30
AUTOR: BRIAN SEBASTIAN CACERES PINZON
FECHA:27/04/2017*/

#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

float main()
{
	
	//DECLARACION DE VARIABLES
	int x, num[10], suma = 0, promedio = 0, mayor = 10, menor = 30;



	cout << "\n\n";
	//RESTRICCIONES Y SUMA
	for (x = 0; x < 10; x++)
	{
		cout << "\n\t" << x + 1 << ") INGRESE UN NUMERO ENTERO ENTRE EL RANGO 10 A 30: ";
		cin >> num[x];
		if (num[x]<10 || num[x]>30)
		{
			cout << "\n\tNUMERO INVALIDO, VUELVA A DIGITAR";
			x--;
		}
		else
		{
			suma += num[x];
		}
		cout << "\n\n";

	}

	//SE MUESTRA EL VECTOR 
	cout << "\n\n"; system("pause>=Null");
	cout << "\n\n"; system("cls");
	cout << "\n\n\n\n\tNUMEROS INGRESADOS:\n\n\t";

	for (x = 0; x < 10; x++)
	{
		cout << "  " << num[x] << "  ;  ";
	}
	//OPERACIONES PROMEDIO, MAYOR Y MENOR
	promedio = suma / 10;

	for (x = 0; x < 10; x++)
	{
		if (num[x]>mayor)
		{
			mayor = num[x];
		}
		if (num[x]<menor)
		{
			menor = num[x];
		}
		
	}//FIN DEL VECTOR

	//MOSTRAR RESULTADOS OBTENIDOS, SEGUN DATOS INGRESADOS

	cout << "\n\n\t PROMEDIO: " << promedio;
	cout << "\n\n\t MAYOR: " << mayor;
	cout << "\n\n\t MENOR: " << menor;
	cout << "\n\n\t SUMA: " << suma;
	cout << "\n\n\n\t GRACIAS POR USAR EL PROGRAMA :)";

	cout << "\n\n\n\n\n\n\t";
	system("Pause");
	return 0;
}