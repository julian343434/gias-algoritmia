#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones
{
public:
    void mostrarMensaje( string nombreCurso) const
    {
        cout<<"bienvenidos al libro de calificaciones\n"<<nombreCurso<<"!"
        <<endl;
    }
};
int main()
{
    string nombreDelCurso;
    LibroCalificaciones miLibroCalificaciones;
    cout<<"escribir el nombre del curso !"<<endl;
    getline( cin,nombreCurso);
    cout<<endl;
    mi LibroCalificaciones.mostrarMensaje( nombreDelCurso)
}
