/*Programa evaluar tres numeros y ver cual es mayor
Fecha:16/04/2017
Autor:Brian Sebastian Caceres Pinzon*/

#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3;

	cout << "Digite tres numeros, separados cada uno por un espacio: "; cin >> n1>> n2>> n3;

	if (n1 == n2 && n2 == n3)
		{
			cout << "Los tres numeros son iguales";
		}

	else if (n1 > n2 && n1 > n3)
		{
			cout << "El mayor es " << n1;
		}
	else if (n2 > n1 && n2 > n3)
		{
			cout << "El mayor es "<<n2;
		}
	
	else if (n3 > n1 && n3 > n2)
		{
			cout << "El mayor es "<<n3;
		}
		
	
	cout << "\nGracias por usar el programa GG perro ";


	system("pause>Null");
	return 0;
}