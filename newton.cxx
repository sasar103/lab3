#include <iostream>
#include <complex>
#include <cmath>

using namespace std;
int main(){


double epsi = 1e-8;
int N =40;
int i=1;
complex<double> z1;
for (double re=-2;re<=2;re+=0.01){
  for (double im=-2;im<=2;im+=0.01){
      complex<double> z0=complex<double>(re,im);
      complex<double> z=z0-((pow(z0,3)-complex<double>(1,0))/(3.0*pow(z0,2)));
      z1 =z0;
      i = 0;
    while (abs(z-z1)>=epsi && i<N)
    {
      z1 = z;
      z=z-((pow(z,3)-complex<double>(1,0))/(3.0*pow(z,2)));
      i++;

    }  
          cout << real(z0) <<"\t" <<imag(z0) <<"\t"<<i<<"\t"<< re<<"\t"<<im<<endl;
  }

}


  return 0;
}
