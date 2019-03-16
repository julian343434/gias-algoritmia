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
	float f;
	int i;
	float resul;
	float suma;
	float x;
	// DESCRIPCION DEL PROBLEMA 
	// PROGRAMA PARA SABER CUANTO PAGARA UNA PERSONA QUE QUIERA N ARTICULOS
	// DEFINICION DE VARIABLES
	// DECLARACION DE VARIABLES
	i = 0;
	suma = 0;
	x = 0;
	f = 0;
	// LECTURA DE DATOS
	cout << "digite el numero de articulos ha llevar" << endl;
	cin >> i;
	// PROCESAMIENTO DE LA INFORMACION
	for (i=0;i>=0;i--) {
		cout << "digite el valor de el articulo" << endl;
		cin >> x;
		if (x>=200000) {
			f = 15;
			suma = x*(1/f)+x;
			cout << "el valor de el articulo es de " << suma << " y su descuento es de " << f << endl;
		} else {
			if (x>100000) {
				f = 12;
				suma = x*(1/f)+x;
				cout << "el valor de el articulo es de " << suma << " y su descuento es de " << f << endl;
			} else {
				f = 10;
				suma = x*(1/f)+x;
				cout << "el valor de el articulo es de " << suma << " y su descuento es de " << f << endl;
			}
		}
		resul = suma+resul;
	}
	// RESULTADOS
	cout << "el total es de " << resul << endl;
	return 0;
}

