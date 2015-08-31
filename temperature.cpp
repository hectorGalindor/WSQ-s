#include <iostream>
using namespace std;

int main()
{
  double c, f;

 //informacion que se le pide al usuario
 cout << "Temperatura en grados Fahrenheit:  ";
 cin >> f;
 c = 5*(f-32)/9;
 cout << "Temperatura en grados celsius: " << c << endl;
 if (c >=100)
 {
   cout <<"el agua hierve a esta temperatura (bajo condiciones normales)." << endl;
 } else
 {
   cout <<"el agua no hierve a esta temperatura (bajo condiciones normales)." << endl;
}

}
