
#include<iostream>
using namespace std;


int main() {
	float area=0;
	float peri=0;
	float rad=0;

	cout << "digite el radio del circulo" << endl;
	cin >> rad;

	area = (3.1415*3.1415)*(rad*rad);
	peri = 2*rad*3.1415;

	cout << "el perimetro de el circulo es de " << peri << endl;
	cout << "el area de el circulo es de " << area << endl;
	return 0;
}

