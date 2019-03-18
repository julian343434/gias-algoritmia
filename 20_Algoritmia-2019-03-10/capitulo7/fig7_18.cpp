#include <iostream>
 #include <iomanip>
 #include <array>
 #include <string>
 #include <algorithm>
 using namespace std;

 int main()
 {
 const size_t tamanioArreglo = 7;
 array< string, tamanioArreglo > colores = { "rojo", "naranja", "amarillo",
 "verde", "azul", "indigo", "violeta" };

 cout << "Arreglo desordenado:\n";
for ( string color : colores )
 cout << color << “ “;

 sort( colores.begin(), colores.end() );

 cout << "\nArreglo ordenado:\n";
 for ( string elemento : colores )
 cout << elemento << " ";

 bool encontro = binary_search( colores.begin(), colores.end(), "indigo" );
 cout << "\n\n\"indigo\" " << ( encontro ? "se" : "no se" )
 << " encuentra en colores" << endl;

 encontro = binary_search( colores.begin(), colores.end(), "cyan" );
 cout << "\"cian\" " << ( encontro ? "se" : "no se" )
 << " encuentra en colores" << endl;
 }
