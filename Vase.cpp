#include "Vase.h"
#include <iostream>
using namespace std;


void Vase::getVolume()
{
	cout << "Enter volume(in liters): ";
	cin >> volume;
	cout << "Volume: " << volume << endl;
}

void Vase::getWeight()
{	cout << "Enter the mass(in kilograms): ";
	cin >> weight;
	cout << "Weight: " << weight << endl;
}

void Vase::getMaterial()
{
	cout << "Enter type of material: ";
	cin >> material;
	cout << "Material: " << material << endl;
}
int main()
{
 setlocale(0, "");

 Vase n1;
 Vase n2;
 Vase n3;
 
 n1.getVolume();
 n1.getWeight();
 n1.getMaterial();

}

