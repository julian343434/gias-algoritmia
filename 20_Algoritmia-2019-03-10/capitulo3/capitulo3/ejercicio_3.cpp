#include <iostream>
#include <string>
using namespace std ;

class LibroCalificaciones
{
public:
    void establecerNombreCurso( string nombre )
    {
    nombreCurso= nombre;
    }
    string obtenerNombreCurso() const
    {
        return nombreCurso;
    }
    void mostrarMensaje()const
    {
        cout<<"nombre del libro de calificaciones para\n"
        <<endl;
    }
private:
    string nombreCurso;
};
int main()
{
    string nombreCurso;
    LibroCalificaciones miLibroCalificaciones;
    cout<<"el nombre iniicial del curso es:"
    <<miLibroCalificaciones.obtenerNombreCurso()
        <<endl;
    cout<<"\nEscribir el nombre del curso:"<<endl;
    getline( cin,nombreDelCurso);
    miLibroCalificaciones.establecerNombreCurso( nombreDelCurso )

    cout<<endl;
    miLibroCalificaciones.mostrarMensaje();
}
