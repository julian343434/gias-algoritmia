#include <iostream>
 using namespace std;

 size_t getSize( double * );

 int main()
 {
 double numeros[ 20 ];

 cout << "El numero de bytes en el arreglo es " << sizeof( numeros ) ;

 cout << "\nEl numero de bytes devueltos por getSize es "
 << getSize( numeros ) << endl;
 }

 size_t getSize( double *ptr )
 {
return sizeof( ptr );
}
