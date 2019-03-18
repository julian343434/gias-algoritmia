#include <iostream>
 #include <iomanip>
 #include <array>
 #include <random>
 #include <ctime>
 using namespace std;

int main()
 {

 default_random_engine motor( static_cast< unsigned int >( time(0) ) );
 uniform_int_distribution< unsigned int > intAleatorio( 1, 6 );

 const size_t tamanioArreglo = 7;
 array< unsigned int, tamanioArreglo > frecuencia = {};

 for ( unsigned int tiro = 1; tiro <= 6000000; ++tiro )
 ++frecuencia[ intAleatorio( motor ) ];

 cout << "Cara" << setw( 13 ) << "Frecuencia" << endl;

 for ( size_t cara = 1; cara < frecuencia.size(); ++cara )
 cout << setw( 4 ) << cara << setw( 13 ) << frecuencia[ cara ]
<< endl;
}
