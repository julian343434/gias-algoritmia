#include <iostream>

using namespace std;

class LibroCalificaciones
{
public:
    void mostrarMensaje() const
    {
        cout<<"Bienvenido al libro de calificaciones"<<endl;
    }
};

int main(){
    LibroCalificaciones miLibroCalificaciones;
    miLibroCalificaciones.mostrarMensaje();
}
