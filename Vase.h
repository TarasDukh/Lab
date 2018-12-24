#ifndef VASE_H
#define VASE_H
#include <string>
class Vase
{
private:
	double volume, weight;
private:
	char material[20];
public:
	void getVolume(); // Оголошення функції об'єму.
	void getWeight(); // Оголошення функції маси.
	void getMaterial(); // Оголошення функції типу матеріала.

	Vase() {}

	Vase(double volume, double weight, char material) {
		this->volume = volume; // об'єм.
		this->weight = weight; // маса.
		this->material = material; // матеріал.

		print();
	}

	void getValues(int height, float speed, string name) {
		this->volume = volume;
		this->weight = weight;
		this->material = material;
	}

	void print() {
		cout << this->volume << " - " << this->weight << " - " << this->material << endl;

	}

	~Vase() { // Деструктор який виводить "Все нормально!"
		cout << "All is okay!" << endl;
	}

};

#endif

