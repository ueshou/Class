#include<stdio.h>
#include<math.h>
int main(){
	double s, c, t, x, r;
	char op, w[4];


       scanf("%s %lf",w, &x);
switch(w[0]){
	case 's':r = sin(x*3.14159/180);break;
	case 'c':r = cos(x*3.14159/180);break;
	case 't':r = tan(x*3.14159/180);break;
}
   printf("%fl",r);

   return 0;
   }
