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
	int i;
	int j;
	float salario;
	float x;
	// DESCRIPCION DEL PROBLEMA 
	// HALLAR EL SALARIO EN 6 AÃ‘OS DE UN PROFESOR
	// DEFINICION DE VARIABLES
	// DECLARACION DE VARIABLE
	i = 0;
	x = 1500000;
	salario = 0;
	a = 0;
	j = 1;
	// LECTURA DE DATOS 
	// PROCESAMIENTO DE LA INFORMACION
	for (i=1;i<=6;i++) {
		salario = x*(1/10)+x;
		x = salario;
		cout << "el salario en el aÃ±o " << j << " es de " << salario << endl;
		j = j+1;
		a = a+x;
	}
	// RESULTADOS
	cout << "el salario en los 6 aÃnos es de " << a << endl;
	return 0;
}

