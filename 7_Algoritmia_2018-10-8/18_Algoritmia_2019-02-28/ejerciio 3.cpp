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
	int a;
	int i;
	int x;
	int x1;
	int x2;
	int x3;
	int x4;
	// 1.DESCRIPCION DEL PROLEMA
	// PROGRAMA QUE CALCULA SI UN NUMERO ES MAYOR O MENOR A CERO
	// 2.DECLARACION DE VARIABLES Y CONSTANTES
	// 3.IDENTIFICACION DE VARABLES Y CONSTANTES
	i = 0;
	a = 0;
	x = 0;
	x1 = 0;
	x2 = 0;
	x3 = 0;
	x4 = 1;
	// 4.DECOLECCION DE DATOS
	cout << "digite la cantidad de numeros que quiere clasificar " << endl;
	cin >> x;
	// 5.PROCESAMIENTO DE LA INFORMACION
	for (i=x;i>=1;i--) {
		cout << "digite el #" << x4 << " numero" << endl;
		cin >> a;
		if (a==0) {
			x1 = 1+x1;
		} else {
			if (a<0) {
				x2 = 1+x2;
			} else {
				if (a>0) {
					x3 = 1+x3;
				}
			}
		}
		x4 = x4+1;
	}
	// 6.VISUALIZACION DE LOS RESULTADOS
	cout << "la cantidad de numeros que son menora a cero son " << x2 << endl;
	cout << "los cantidad de numeros que son cero son " << x1 << endl;
	cout << "la cantidad de numeros que son mayores a cero son " << x3 << endl;
	return 0;
}

