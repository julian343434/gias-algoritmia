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
	int cun;
	string d;
	int i;
	int u;
	int v;
	string val;
	int x;
	int z;
	// 1.DESCRIPCION DEL PROLEMA
	// PROGRAMA QUE CALCULA LOA CUENTA DE UN CLIENTE DE AMBURGESAS
	// 2.DECLARACION DE VARIABLES Y CONSTANTES
	// 3.IDENTIFICACION DE VARABLES Y CONSTANTES
	x = 0;
	d = "";
	u = 0;
	cun = 0;
	z = 0;
	i = 0;
	val = "";
	// 4.DECOLECCION DE DATOS
	cout << "digite la cantidad de las hamburgesas " << x << endl;
	cin >> v;
	// 5.PROCESAMIENTO DE LA INFORMACION
	for (i=v;i>=1;i--) {
		cout << "digite el  tipo de hamburgesa, " << ;
		cout << "sencillas(S), dobles (D), triples(T) rescpetivamente" << endl;
		cin >> d;
		if (d=="S") {
			x = 1+x;
		} else {
			if (d=="D") {
				u = 1+u;
			} else {
				if (d=="T") {
					z = z+1;
				}
			}
		}
	}
	cun = (x*10000)+(u*15000)+(z*28000);
	cun = (cun*0.05)+cun;
	cout << "¿usted pagara con targeta de credito? , digite (SI/NO) respectivamente " << endl;
	cin >> val;
	if (val=="SI") {
		cun = (cun*0.05)+cun;
	}
	cout << "el valor de su factura es de " << cun << endl;
	// 6.VISUALIZACION DE LOS RESULTADOs
	return 0;
}

