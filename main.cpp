//EJERCICIO DOS REALIZADO

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
  
double division (double ,double);  

//FUNCION PRINCIPAL
int main()
{
   int a,b; 
   cout << "Introduce dividendo: ";
   cin >> a;
    cout << "Introduce divisor: ";
   cin >> b;

    if(b!=0)
     cout <<a<< " / "<<b<<" = "<< division(a,b) << endl;
 else
    cout << "Divisor no puede ser cero" << endl;
   return 0;
  
}

//Funcion recursiva
double division (double x,double y)
{
  double res;
  if (x==y) 
  return 1;
  
  if (x<y) 
  return 0;
  
  if (x==0)
  return 0;

  if(x>y)
  {
    res = (division(x-y, y)+1);
  }
  return res ;
}
 
