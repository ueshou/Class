#include<stdio.h>

double f(double x){
	return x*x*x*x-2*x*x*x+x*x-3*x+1;
}
double g(double X){ 
	return 1/X;
}

int main(){
	double a=0,b=4,c=1,sum=0,x=0,n=0,F=0,d=0;
	printf("何等分しますか？\n");
	scanf("%lf",&n);
	d=(b-a)/n;
	for(x=a+d;x<b;x+=d){
		F=f(x);
		sum+=2*F;
		c++;
	}
	printf("%lf\n",(f(a)+f(b)+sum)*d/2);

	double A=1,B=2,C=1,X=0,SUM=0,N=0,G=0,D=0;
	printf("何等分しますか？\n");
        scanf("%lf",&N);
	D=(B-A)/N;
        for(X=A;X<B;X+=D){
                G=g(X);
                if(c!=1 || c!=n) G=2*G;
                sum+=G;
                c++;
        }
        printf("%lf\n",SUM*D/2);

	return 0;
}

