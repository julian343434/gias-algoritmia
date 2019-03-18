#include <iostream>
 using namespace std;

 int cuboPorValor( int );

 int main()
{
 int numero = 5;

 cout << "El valor original de numero es " << numero;

 numero = cuboPorValor( numero );
 cout << "\nEl nuevo valor de numero es " << numero << endl;
}


 int cuboPorValor( int n )
 {
 return n * n * n;
 }
