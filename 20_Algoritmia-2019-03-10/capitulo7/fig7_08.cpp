#include <iostream>
#include <array>
 using namespace std;

 int main()
 {
 const size_t tamanioArreglo = 4;
 array< int, tamanioArreglo > a = { 10, 20, 30, 40 };
 int total = 0;

 for ( size_t i = 0; i < a.size(); ++i )
 total += a[ i ];

 cout << "Total de elementos del arreglo: " << total << endl;
 }
