 #include <iostream>
 #include <iomanip>
 #include "LibroCalificaciones.h"
using namespace std;


 LibroCalificaciones::LibroCalificaciones( const string &nombre,
 const array< int, estudiantes > &arregloCalificaciones )
: nombreCurso( nombre ), calificaciones( arregloCalificaciones )
{
 }


 void LibroCalificaciones::establecerNombreCurso( const string &nombre )
 {
nombreCurso = nombre;
}


 string LibroCalificaciones::obtenerNombreCurso() const
 {
 return nombreCurso;
}

 void LibroCalificaciones::mostrarMensaje() const
 {

cout << "Bienvenido al libro de calificaciones para\n"
<< obtenerNombreCurso() << "!"
<< endl;
 }

void LibroCalificaciones::procesarCalificaciones() const
{

 imprimirCalificaciones();



 cout << setprecision( 2 ) << fixed;
 cout << "\nEl promedio de la clase es " << obtenerPromedio() << endl;


cout << "La calificacion mas baja es " << obtenerMinimo()
<< "\nLa calificacion mas alta es "
 << obtenerMaximo() << endl;



imprimirGraficoBarras();
}
int LibroCalificaciones::obtenerMinimo() const
{
int calificacionInf = 100;


 for ( int calificacion : calificaciones )
 {

calificacionInf
if ( calificacion < calificacionInf )
 calificacionInf = calificacion;
}

 return calificacionInf;
 }
int LibroCalificaciones::obtenerMaximo() const
 {
int calificacionSup = 0;

for ( int calificacion : calificaciones )
{

calificacionSup
if ( calificacion > calificacionSup )
 calificacionSup = calificacion;
 }

 return calificacionSup;
}

 double LibroCalificaciones::obtenerPromedio() const
{
int total = 0;

 for ( int calificacion : calificaciones )
total += calificacion;

 return static_cast< double >( total ) / calificaciones.size();
 }

 void LibroCalificaciones::imprimirGraficoBarras() const
{
 cout << "\nDistribucion de calificaciones:" << endl;

const size_t tamanioFrecuencia = 11;
 array< unsigned int, tamanioFrecuencia > frecuencia = {};

 for ( int calificacion : calificaciones )
 ++frecuencia[ calificacion / 10 ];

 for ( size_t cuenta = 0; cuenta < tamanioFrecuencia; ++cuenta )
 {

 if ( 0 == cuenta )
 cout << " 0-9: ";
 else if ( 10 == cuenta )
 cout << " 100: ";
 else
 cout << cuenta * 10 << "-" << ( cuenta * 10 ) + 9 << ": ";

 for ( unsigned int estrellas = 0; estrellas < frecuencia[ cuenta ];
++estrellas )
 cout << '*';

 cout << endl;
 }
 }

 void LibroCalificaciones::imprimirCalificaciones() const
 {
 cout << "\nLas calificaciones son:\n\n";

 for ( size_t estudiante = 0; estudiante < calificaciones.size(); ++estudiante )
 cout << "Estudiante " << setw( 2 ) << estudiante + 1 << ": " << setw( 3 )
 << calificaciones[ estudiante ] << endl;
 }
