 #include <iostream>
 using namespace std;

void cuboPorReferencia( int * );

 int main()
 {
 int numero = 5;

 cout << "El valor original de numero es " << numero;

cuboPorReferencia( &numero );

 cout << "\nEl nuevo valor de numero es " << numero << endl;
 }

 void cuboPorReferencia( int *nPtr )
{
 *nPtr = *nPtr * *nPtr * *nPtr;
 }
