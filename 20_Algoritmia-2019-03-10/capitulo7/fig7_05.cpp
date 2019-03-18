#include <iostream>
 #include <iomanip>
 #include <array>
using namespace std;

int main()
 {

 const size_t tamanioArreglo = 5;

 array< int, tamanioArreglo > s;

 for ( size_t i = 0; i < s.size(); ++i )
 s[ i ] = 2 + 2 * i;

 cout << "Elemento" << setw( 13 ) << "Valor" << endl;

 for ( size_t j = 0; j < s.size(); ++j )
 cout << setw( 7 ) << j << setw( 13 ) << s[ j ] << endl;
 }
