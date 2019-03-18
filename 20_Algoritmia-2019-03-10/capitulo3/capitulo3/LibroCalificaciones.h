#include <iostream>
#include <string>

class LibroCalificaciones
{
public:
    explicit LibroCalificaciones(std::string nombre)
    : nombreCurso( nombre )
    {

    }
    void esctablecerNombreCurso(std::string nombre)
    {
        nombreCurso=nombre;
    }
    std::string obtenerNombreCurso()const
    {
        return nombreCurso;
    }
    void mostrarMensaje()
    {
        std::cout <<"bienvenido al libro de calificaciones "
        <<obtenerNombreCurso()
        <<"|"<<std::endl;
    }
private:
    std::string nombreCurso;
};
