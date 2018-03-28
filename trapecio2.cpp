#include <iostream>
#include <cmath>
#include <vector>
using fptr = double(double);
//double fint (double a, double b, int n, fptr f);
//double ff (double x);
double f(double x){
  x+=2;
  return 2*x;
}

double g(double & x){
  x+=8;
  return 3*x;
}
double h(double  x){
  x+=2; 
  return 2*x;
}
int main (){
  /*  int N=10;
  std::vector<double> l(N);
  std::vector<double> x(N);
  double a=0;
  double b=M_PI;
  double dx=(b-a)/N;
  for(int i=0;i<N;i++){
    x[i]=a+i*dx;
    l[i]=sin(a+i*dx);
  }
  */
  double a=1;
  std::cout<<a<<'\t'<<f(a)<<std::endl;
  std::cout<<a<<'\t'<<g(a)<<std::endl;
  std::cout<<a<<'\t'<<h(a)<<std::endl;
  std::cout<<a<<std::endl;
  return 0;
}


