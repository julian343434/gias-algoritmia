#include <string>
class LibroCalificaciones
{
public:
    explicit LibroCalificaciones(std::string);
    void  establecerNombreCurso(std::string);
    std::obtenerNombreCurso() const;
    void mostrarMensaje() const;
private:
    std::string nombreCurso;
};
