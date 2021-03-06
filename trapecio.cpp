#include <iostream>
#include <cmath>
#include <vector>
using fptr = double(double);
double fint (double a, double b, int n, fptr f);
double ff (double x);
int main ()

{  
  std::cout << fint(0,2*M_PI,1001,sin)<<std::endl;
  std::cout << fint(0,2*M_PI,1001,cos)<<std::endl;
  std::cout << fint(0,2*M_PI,1001,ff)<<std::endl;
  return 0;
}

double fint (double a, double b, int n, fptr f)
{

  double suma(0);
  double dx((b-a)/n);
  for(double x=a;x<b;x+=dx){
    suma+=0.5*dx*(f(x)+f(x+dx));
   
     }
  return suma;
}
double ff (double x){

  return sin(x)*exp(-x*x);

}
