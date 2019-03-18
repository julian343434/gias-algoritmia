#include <iostream>
 #include <iomanip>
#include <vector>
#include <stdexcept>
 using namespace std;

 void imprimirVector( const vector< int > & ); // muestra el vector
void recibirVector( vector< int > & ); // introduce los valores en el vector

int main()
{

vector< int > enteros1( 7 );
 vector< int > enteros2( 10 );

cout << "El tamanio del vector enteros1 es " << enteros1.size()
<< "\nvector despues de la inicializacion:" << endl;
 imprimirVector( enteros1 );

 cout << "\nEl tamanio del vector enteros2 es " << enteros2.size()
 << "\nvector despues de la inicializacion:" << endl;
 imprimirVector( enteros2 );

 cout << "\nEscriba 17 enteros:" << endl;
 recibirVector( enteros1 );
 recibirVector( enteros2 );

cout << "\nDespues de la entrada, los vectores contienen:\n"
 << "enteros1:" << endl;
 imprimirVector( enteros1 );
cout << "enteros2:" << endl;
 imprimirVector( enteros2 );

 cout << "\nEvaluacion: enteros1 != enteros2" << endl;

 if ( enteros1 != enteros2 )
 cout << "enteros1 y enteros2 no son iguales" << endl;

 vector< int > enteros3( enteros1 );

 cout << "\nEl tamanio del vector enteros3 es " << enteros3.size()
<< "\nvector despues de la inicializacion:" << endl;
 imprimirVector( enteros3 );

 cout << "\nAsignacion de enteros2 a enteros1:" << endl;
enteros1 = enteros2;

 cout << "enteros1:" << endl;
 imprimirVector( enteros1 );
 cout << "enteros2:" << endl;
 imprimirVector( enteros2 );

 cout << "\nEvaluacion: enteros1 == enteros2" << endl;

 if ( enteros1 == enteros2 )
 cout << "enteros1 y enteros2 son iguales" << endl;

cout << "\nenteros1[5] es " << enteros1[ 5 ];

 cout << "\n\nAsignacion de 1000 a enteros1[5]" << endl;
 enteros1[ 5 ] = 1000;
 cout << "enteros1:" << endl;
 imprimirVector( enteros1 );
 try
 {
 cout << "\nIntento de mostrar enteros1.at( 15 )" << endl;
 cout << enteros1.at( 15 ) << endl;
 }
 catch ( out_of_range &ex )
 {
 cerr << "Ocurrio una excepcion: " << ex.what() << endl;
 }

 cout << "\nEl tamanio actual de enteros3 es: " << enteros3.size() << endl;
 enteros3.push_back( 1000 );
 cout << "El tamanio nuevo de enteros3 es: " << enteros3.size() << endl;
 cout << "Ahora enteros3 contiene: ";
 imprimirVector( enteros3 );
 }

 void imprimirVector( const vector< int > &arreglo )
 {
 for ( int elemento : elementos )
 cout << elemento << " ";

 cout << endl;
}
 void recibirVector( vector< int > &arreglo )
 {
 for ( int &elemento : elementos )
 cin >> elemento;
}
