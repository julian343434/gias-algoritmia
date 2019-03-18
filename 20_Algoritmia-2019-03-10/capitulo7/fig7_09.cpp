#include <iostream>
 #include <iomanip>
 #include <array>
 using namespace std;

 int main()
 {
 const size_t tamanioArreglo = 11;
 array< unsigned int, tamanioArreglo > n =
 { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

 cout << "Distribucion de calificaciones:" << endl;

 for ( size_t i = 0; i < n.size(); ++i )
 {

 if ( 0 == i )
 cout << " 0-9: ";
 else if ( 10 == i )
 cout << " 100: ";
 else
 cout << i * 10 << “-” << ( i * 10 ) + 9 << ": ";

 for ( unsigned int estrellas = 0; estrellas < n[ i ]; ++estrellas )
 cout << '*';

 cout << endl;
}
 }
