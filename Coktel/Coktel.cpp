

#include <cstdlib>
#include <list>
#include <iterator>
#include <ctime>
#include <cmath>
#include "Chefcito.h"
#include "Fresa.h"
#include "Platano.h"
#include "Manzana.h"
#include "Naranja.h"
using namespace std;
Chefcito::Chefcito() {


}

Chefcito::~Chefcito() {

}

int main() {

	Fruta* copa[20];

	int numero, size;
	list <Fruta> cocktel;
	cout << "De que tamaño quiere su cocktel" << endl;
	cin >> size;
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++) {
		
		numero = rand() % 4 + 1;
	
		switch (numero) {
		case 1:
			copa[i] = new Fresa("Fresa");
			cout << numero << endl;
			break;
		
		
		case 2:
			copa[i] = new Naranja("Naranja");
			cout << numero << endl;
			break;
		case 3:
			copa[i] = new Platano("Platano");
			cout << numero << endl;

			break;
		case 4:
			copa[i] = new Manzana("Manzana");
			cout << numero << endl;

			break;
		default:
			cout << "salio otro numero" << endl;
			break;
		}

	}
	cout << "tu copa contiene" << endl;
	for (int i = 0; i < size; i++) {

		cout << i + 1<< ") " << copa[i]->getNombre() << endl;
	}
	system("pause");

	return 0;
}