#include <iostream>
#include <string>

using namespace std;

class LibroCalificaciones
{
public:
    explicit LibroCalificaciones (string nombre)
    :nombreCurso(nombre)
    {

    }
    void establecerNombreCurso (string nombre)
    {
        nombreCurso=nombre;
    }
    string obtenerNombreCurso ()const
    {
        return nombreCurso;
    }
    void mostrarMensaje()const
    {
        cout<<"bienvenido al libro de calificaciones para\n"
        <<obtenerNombreCurso()
        <<"!"<<endl;
    }
private:
    string nombreCurso;
};
int main()
{
    LibroCalificaciones libroCalificaciones1("CSS101 introduccion a la programcacion en c+");
    LibroCalificaciones libroCalificaciones2("CSS102 estructura de datos en c++");
    cout<<"libro de calificaciones se creo para el curso:"
    <<libroCalificaciones1.obtenerNombreCurso()
    <<"\nlibroCalificaciones2 se creo para el curso:"
    <<libroCalificaciones2.obtenerNombreCurso()
    <<endl;
}
