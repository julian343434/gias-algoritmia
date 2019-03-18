#include <iostream>
 #include "LibroCalificaciones.h"
LibroCalificaciones
 using namespace std;

argumento
 LibroCalificaciones::LibroCalificaciones( string nombre )
 {
 establecerNombreCurso( nombre );
}
 void LibroCalificaciones::establecerNombreCurso( string nombre )
 {
 if ( nombre.size() <= 25 )
 nombreCurso = nombre;

 if ( nombre.size() > 25 )
 {

 nombreCurso = nombre.substr( 0, 25 );

cerr << "El nombre \"" << nombre << "\" excede la longitud maxima (25).\n"
 "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl;
 }
 }

 string LibroCalificaciones::obtenerNombreCurso() const
 {
 return nombreCurso;
 }


 void LibroCalificaciones::mostrarMensaje() const
 {

 cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
 << "!" << endl;
 }
