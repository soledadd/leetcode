#include<iostream>
using namespace std;
double pow(double x, int n) {
  if (n>=0) return getres(x,n);
  else {
    n = 0 - n;
    return 1.0/getres(x,n);
  }
}
double getres(double x,int n) {
  if (n == 1) return x;
  if (n == 0) return 1.00;
  if (n%2 == 0) {
    double tmp = getres(x,n/2)
		return tmp*tmp;
	} else {
	  double tmp = getres(x,(n-1)/2);
		return x * tmp*tmp;
		}
}
int main()
{
	double x = 1.235;
	cout<<pow(x,15);
}
