#include <iostream>
#include <cmath>
#include <vector>
using fptr = double(double, double);
double fint (double a, double b, int n, fptr f);
double Besself (double x, int n);
double Rint (double a, double b, int n, fptr f);
double ff (double x, double theta);
int main ()

{
 for(double x=1;x<1.1;x+=.1){  
   std::cout<<x<<' '<< Besself(x,1000)<<std::endl;
 }
  return 0;
}

double fint (double a, double b, int n, double x, fptr f)
{

  double suma(0);
  double dtheta((b-a)/(n));
  for(double theta=a;theta<b;theta+=dtheta){
    suma+=0.5*dtheta*(f(x,theta)+f(x,theta+dtheta));
   
     }
  return suma;
}/*
double Rint (double a, double b, int n, fptr f)
{
  return 4.*fint(a,b,n,f)/3.-fint(a,b,2*(n-1)+1,f)/3.;
} */
double ff (double x, double theta){

  return cos(x*sin(theta));

}

double Besself (double x, int n)
{

  return fint(0,M_PI,n,x,ff)/M_PI;
}
