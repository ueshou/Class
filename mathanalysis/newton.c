#include <stdio.h>
#include <math.h>

double f(double x);
double _f(double x);

int main(void){
  double x_start = 12.0;
  double err = 100.0;
  double x_pre = x_start;
  int n=0,nmax=20;

  do{
      x_start = x_start - f(x_start)/_f(x_start);
      err = fabs(-f(x_start)/_f(x_start));
     // x_pre = x_start;
      printf("%lf\n",x_start);
      n++;
      if(n==nmax){
	      printf("fails\n");
	      break;
      }
  }while(err>0.000001);

  printf("result:%lf\n",x_start);
}

double f(double x){
  return 5*x*x*x + 10*x*x - 2*x -5;
}

double _f(double x){
  return 15*x*x + 20*x -2;
}
