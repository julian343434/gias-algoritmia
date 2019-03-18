#include <iostream>
 #include <array>
 using namespace std;

 void inicArregloStatic();
 void inicArregloAutomatico();
 const size_t tamanioArreglo = 3;

 int main()
 {
 cout << "Primera llamada a cada funcion:\n";
 inicArregloStatic();
 inicArregloAutomatico();

 cout << "\n\nSegunda llamada a cada funcion:\n";
 inicArregloStatic();
 inicArregloAutomatico();
 cout << endl;
 }

 void inicArregloStatic( void )
 {

 static array< int, tamanioArreglo > arreglo1;

 cout << "\nValores al entrar en inicArregloStatic:\n";

 for ( size_t i = 0; i < arreglo1.size(); ++i )
 cout << "arreglo1[" << i << "] = " << arreglo1[ i ] << " ";
 cout << "\nValores al salir de inicArregloStatic:\n";

 for ( size_t j = 0; j < arreglo1.size(); ++j )
cout << "arreglo1[" << j << "] = " << ( arreglo1[ j ] += 5 ) << " ";
 }

 void inicArregloAutomatico( void )
{

array< int, tamanioArreglo > arreglo2 = { 1, 2, 3 };

 cout << "\n\nValores al entrar a inicArregloAutomatico:\n";

 for ( size_t i = 0; i < arreglo2.size(); ++i )
 cout << "arreglo2[" << i << "] = " << arreglo2[ i ] << " ";

 cout << "\nValores al salir de inicArregloAutomatico:\n";

 for ( size_t j = 0; j < arreglo2.size(); ++j )
 cout << "arreglo2[" << j << "] = " << ( arreglo2[ j ] += 5 ) << " ";
 }
