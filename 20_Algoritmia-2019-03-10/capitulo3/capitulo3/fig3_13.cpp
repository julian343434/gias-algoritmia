#include <iostream>


#include "LibroCalificaciones.h"
LibroCalificaciones GradeBook
 using namespace std;

int main(){


 LibroCalificaciones libroCalificaciones1( "CS101 Introduccion a laprogramacion en C++" );
 LibroCalificaciones libroCalificaciones2( "CS102 Estructuras de datos en C++" );


 cout << "libroCalificaciones1 creado para el curso: "
<< libroCalificaciones1.obtenerNombreCurso()
 << "\nlibroCalificaciones2 creado para el curso: "
<< libroCalificaciones2.obtenerNombreCurso()
 << endl;
 }
