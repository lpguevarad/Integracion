#include <iostream>
#include <cmath>
#include <vector>
int main ()
{
  int N=10;
  std::vector<double> l(N);
  std::vector<double> x(N);
  double a=0;
  double b=M_PI;
  double dx=(b-a)/N;
  for(int i=0;i<N;i++){
    x[i]=a+i*dx;
    l[i]=sin(a+i*dx);
  }
  
  for(int i=0;i<N;i++){
    std::cout<<i<<std::endl;
  }
  /*
    std::cout<<"--------"<<std::endl;
  for(int i=0;i<N;++i){
    std::cout<<i<<std::endl;
  }*/

  return 0;
}
