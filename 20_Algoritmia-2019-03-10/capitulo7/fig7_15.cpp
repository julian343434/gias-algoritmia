 #include <string>
 #include <array>

class LibroCalificaciones
 {
 public:

 static const size_t estudiantes = 10;

LibroCalificaciones( const std::string &, const std::array< int, estudiantes
> & );

 void establecerNombreCurso( const std::string & );
 string obtenerNombreCurso() const;
 void mostrarMensaje() const;
 void procesarCalificaciones() const;
 int obtenerMinimo() const;
 int obtenerMaximo() const;

 double obtenerPromedio() const;  void imprimirGraficoBarras() const;
 void imprimirCalificaciones() const;
calificaciones
 private:
 std::string nombreCurso;

std::array< int, estudiantes > calificaciones;
de estudiantes
 };
