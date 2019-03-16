

#include<iostream>
using namespace std;



int main() {
	float apotema=0;
	float area=0;
	float peri=0;
	float x=0;

	cout << "digite el valor de un lado del pentagono" << endl;
	cin >> x;
	cout << "digite el apotema de el pentagono" << endl;
	cin >> apotema;

	peri = x*5;
	area = (apotema*peri)/2;

	cout << "el area de el pentagono es de " << area << endl;
	return 0;
}

