// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float a;
	float b;
	float c;
	float i;
	float suma;
	float v;
	float x;
	// 1.DESCRIPCION DEL PROLEMA
	// PROGRAMA QUE CALCULA EL VALOR AHORADO EN UN AÑO Y DIARIAMENTE
	// 2.DECLARACION DE VARIABLES Y CONSTANTES
	// 3.IDENTIFICACION DE VARABLES Y CONSTANTES
	a = 0;
	b = 0;
	c = 0;
	x = 0;
	suma = 0;
	i = 0;
	v = 1;
	// 4.DECOLECCION DE DATOS
	cout << "digite el numero de dias a calcular lo ahorrrado" << endl;
	cin >> x;
	c = 1+b;
	x = 365-x;
	// 5.PROCESAMIENTO DE LA INFORMACIO
	for (i=365;i>=1;i--) {
		c = c+b;
		b = c-b;
		suma = b+suma;
		if (x<i) {
			if (v>=3) {
				cout << "el dia #" << v << " ahorro " << b << " pesos" << endl;
			} else {
				cout << "el dia #" << v << " ahorro " << b << " peso" << endl;
			}
		}
		v = v+1;
	}
	// 6.VISUALIZACION DE LOS RESULTADOS
	cout << "el valor ahorrado en un año es de " << suma << endl;
	return 0;
}

