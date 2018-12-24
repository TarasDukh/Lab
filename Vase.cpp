#include "Vase.h"
#include <iostream>
using namespace std;


void Vase::getVolume() // Функція вводу об'єму.
{
	cout << "Enter volume(in liters): "; 
	cin >> volume;
	cout << "Volume: " << volume << endl;
}

void Vase::getWeight() // Функція вводу маси.
{	cout << "Enter the mass(in kilograms): ";
	cin >> weight;
	cout << "Weight: " << weight << endl;
}

void Vase::getMaterial() // Функція вводу типу матеріала.
{
	cout << "Enter type of material: ";
	cin >> material;
	cout << "Material: " << material << endl;
}


