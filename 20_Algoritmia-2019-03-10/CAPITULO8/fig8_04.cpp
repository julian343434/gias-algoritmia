#include <iostream>
using namespace std;

 int main()
 {
int a = 7;
 int *aPtr = &a;

 cout << "La direccion de a es " << &a
 << "\nEl valor de aPtr es " << aPtr;
 cout << "\n\nEl valor de a es " << a
 << "\nEl valor de *aPtr es " << *aPtr << endl;
 }
