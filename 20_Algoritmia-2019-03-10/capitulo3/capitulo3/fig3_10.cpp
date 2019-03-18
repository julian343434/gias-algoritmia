#include<iostream>
#include"LibroCalificaciones.h"
using namespace std ;

int main()
{
    LibroCalificaciones libroCalificaciones1("CSS101 introduccion ala programamcion en c++");
    LibroCalificaciones libroCalificaciones2("CSS102 estructuras en c++");
    cout<<"libroCalificaciones creado para el curso:"
    <<libroCalificaciones1.obtenerNombreCurso()
    <<"\n libroCalificaciones2 creado para el curso "
    <<endl;
}
