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
	void getVolume();
	void getWeight();
	void getMaterial();

	VaseA(32, 12, Rock);
	cout << a.getVolume << endl;
	cout << a.getWeight << endl;
	cout << a.getMaterial << endl;
	
	VaseB(65, 63, Marmur);
	cout << b.getVolume << endl;
	cout << b.getWeight << endl;
	cout << b.getMaterial << endl;
	
	VaseC(17, 84, Iron);
	cout << c.getVolume << endl;
	cout << c.getWeight << endl;
	cout << c.getMaterial << endl;	
protected:

protected:

};

#endif

