#include <iostream>
#include <cmath>
/*#include <vector>**/
using fptr = double(double);
double fint (double a, double b, int n, fptr f);
double Rint (double a, double b, int n, fptr f);
double Sint (double a, double b, fptr f);
double ff (double x);

int main ()

{  
  std::cout << fint(0,M_PI,100,ff)<<std::endl;
  std::cout << Rint(0,M_PI,100,ff)<<std::endl;
  std::cout << fint(0,2*M_PI,1001,cos)<<std::endl;
  std::cout << fint(0,2*M_PI,1001,ff)<<std::endl;
  std::cout << Sint(0,2*M_PI,1001,cos)<<std::endl;
  
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

double Rint (double a, double b, int n, fptr f)
{
  return 4.*fint(a,b,n,f)/3.-fint(a,b,2*(n-1)+1,f)/3.;
}

double Sint (double a, double b, fptr f)
{
  double ssuma(0);
  double d2 ((a+b)/2);
  for (double x=a;x<b;x+=d2){
    ssuma+=(b-a)/6.*(f(a)+f(d2)+f(b));
  }
  
  return ssuma;
}

double ff (double x)
{

  return sin(x)*exp(-x*x);
}
