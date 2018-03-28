#include <iostream>
#include <cmath>
#include <vector>
using fptr = double(double); /* menciono que usare una funcion que es un double y me recibe 1 solo double. */
double fint (double a, double b, int n, fptr f); 
double ff (double x);
double gg (double x);
int main ()

{  
  std::cout << fint(0,M_PI,1001,sin)<<std::endl;
  std::cout << fint(0,1,1001,exp)<<std::endl;
  std::cout << fint(0,1,3001,atan)<<std::endl;
  std::cout << fint(0,1,3001,ff)<<std::endl;
  std::cout << fint(0.000000001,0.8,3001,gg)<<std::endl;
  
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

  return 4./(1.+x*x);

}
double gg (double x){

  return sin(x)/(x);

}
