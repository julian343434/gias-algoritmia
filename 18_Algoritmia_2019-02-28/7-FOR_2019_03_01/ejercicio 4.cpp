// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cstdlib>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int i;
	int v;
	int x;
	int x1;
	int x2;
	int x3;
	// 1.DESCRIPCION DEL PROLEMA
	// PROGRAMA QUE 
	// 2.DECLARACION DE VARIABLES Y CONSTANTES
	// 3.IDENTIFICACION DE VARABLES Y CONSTANTES
	x = 0;
	i = 0;
	x1 = 0;
	x2 = 0;
	x3 = 0;
	v = 0;
	// 4.DECOLECCION DE DATOS
	cout << "digite la cantidad focos en el lote" << endl;
	cin >> x;
	// 5.PROCESAMIENTO DE LA INFORMACION
	for (i=x;i>=1;i--) {
		v = (rand()%30)+1;
		if ((v>=1) && (v<=10)) {
			x1 = x1+1;
		} else {
			if ((v>=11) && (v<=20)) {
				x2 = x2+1;
			} else {
				if ((v>=21) && (v<=30)) {
					x3 = x3+1;
				}
			}
		}
	}
	// 6.VISUALIZACION DE LOS RESULTADOS
	cout << "la cantidad de focos verdes son " << x1 << endl;
	cout << "la cantidad de focos blancos son " << x2 << endl;
	cout << "la cantidad de focos rojos son " << x3 << endl;
	return 0;
}

