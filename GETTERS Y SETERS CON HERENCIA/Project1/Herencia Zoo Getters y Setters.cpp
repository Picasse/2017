/*	Programa: CLASES Y CONSTRUCTORES
	Autores:  Sebastian Caceres Pinzon
			  Diego fernando Betancout
	Fecha:	  14/10/2017 */

#include<iostream>
#include<string>

using namespace std;


class ZOO
{
public:
	ZOO(){}

	void setvalores(string nombre, string sexo, string edad);

	string getnombre()
		{
			return nombre;
		}

	string getsexo()
		{
			return sexo;
		}

	string getedad()
		{
			return edad;
		}

private:
	string nombre;
	string sexo;
	string edad;
	//cout << "LOS ANIMALES SE ENCUENTRAN UBICADOS EN EL ZOOLOGICO " << nom << endl << endl;
};

//------------------------------------------------------------------------------------------------------------------------------
class REPTIL :public ZOO
{
	public:
	REPTIL(){}
		void estado()
		{
			cout << "\n\tEste animal se encuentra tomando el sol tranquilamente, apenas si se mueve, parece muerto....";
		}
};
//------------------------------------------------------------------------------------------------------------------------------
class MAMIFERO :public ZOO
{
	public:
	MAMIFERO(){}
		void estado()
		{
			cout << "\n\tEste animal se encuentra comiendo tranquilamente junto a los demas\n parece que luego se echara una larga siesta....";
		}
};
//------------------------------------------------------------------------------------------------------------------------------
class AVE :public ZOO
{
public:
	AVE(){}
		void estado()
		{
			cout << "\n\tEste animal se encuentra volando... Ah no espera, se choco con la reja";
		}
};
//------------------------------------------------------------------------------------------------------------------------------
class PEZ :public ZOO
{
public:
	PEZ(){}
		void estado()
		{
			cout << "\n\tEste animal se encuentra nadando felizmente por su acuario como un buen pez que es\n\t oh no espera!!, se lo acaban de devorar!!.....";
		}
};
//------------------------------------------------------------------------------------------------------------------------------

void ZOO::setvalores(string x, string y, string z)
{
	nombre = x;
	sexo = y;
	edad = z;
}

//------------------------------------------------------------------------------------------------------------------------------
int main()
{
	string A;
	string B;
	string C;
	int D;

	cout << "\n\n\t\t-BIENVENIDO  AL  ZOOLOGICO-" << endl<<endl;
	cout << "\tIngrese el nombre del animal: ";
	cin >> A;
	cout << endl;
	cout << "\tIngrese el sexo del animal: ";
	cin >> B;
	cout << endl;
	cout << "\tIngrese la edad del animal en meses: ";
	cin >> C;
	cout << endl;
	cout << "\tIngrese el tipo de animal: ";
	cout << endl;
	cout << endl;
	cout << "\t\t-TIPOS DE ANIMALES DISPONIBLES-";
	cout << endl;
	cout << "\t\t 1. REPTIL"<<endl;
	cout << "\t\t 2. MAMIFERO"<<endl;
	cout << "\t\t 3. AVE"<<endl;
	cout << "\t\t 4. PEZ"<<endl;
	cout << "\t\tDigite el numero: ";
	cin >> D;
	system("cls");

	ZOO miAnimal;
	miAnimal.setvalores(A,B,C);

	if (D==1)
		{
			cout << "\n\n\n\tR E P T I L";
			cout << endl;
			cout << endl;
			cout << "\tEl nombre del animal es " << miAnimal.getnombre() << endl;
			cout << "\tEl sexo del animal es " << miAnimal.getsexo() << endl;
			cout << "\tLa edad del animal es " << miAnimal.getedad() << " meses." << endl;
			cout << "\tQue esta haciendo el animal? " << endl;
			REPTIL mireptil;
			mireptil.estado();
		}
	if (D == 2)
		{
			cout << "\n\n\n\tM A M I F E R O";
			cout << endl;
			cout << endl;
			cout << "\tEl nombre del animal es " << miAnimal.getnombre() << endl;
			cout << "\tEl sexo del animal es " << miAnimal.getsexo() << endl;
			cout << "\tLa edad del animal es " << miAnimal.getedad() << " meses." << endl;
			cout << "\tQue esta haciendo el animal? " << endl;
			MAMIFERO mimamifero;
			mimamifero.estado();
		}
	if (D == 3)
		{
			cout << "\n\n\n\tA V E";
			cout << endl;
			cout << endl;
			cout << "\tEl nombre del animal es " << miAnimal.getnombre() << endl;
			cout << "\tEl sexo del animal es " << miAnimal.getsexo() << endl;
			cout << "\tLa edad del animal es " << miAnimal.getedad() << " meses." << endl;
			cout << "\tQue esta haciendo el animal? " << endl;
			AVE miave;
			miave.estado();
		}
	if (D == 4)
		{
			cout << "\n\n\n\tP E Z";
			cout << endl;
			cout << endl;
			cout << "\tEl nombre del animal es " << miAnimal.getnombre() << endl;
			cout << "\tEl sexo del animal es " << miAnimal.getsexo() << endl;
			cout << "\tLa edad del animal es " << miAnimal.getedad() << " meses." << endl;
			cout << "\t¿Que esta haciendo el animal? " << endl;
			PEZ mipez;
			mipez.estado();
		}

	system("pause>null");
}