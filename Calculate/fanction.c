#include<stdio.h>
#include<math.h>

int main(){
       int d;
       double x;
       char f;

	scanf("%c %d", &f, &d);

	switch(f){
		case 's': x = sin(d*3.14159/180);break;
		case 'c': x = cos(d*3.14159/180);break;
		case 't': x = tan(d*3.14159/180);break;
		default:printf("error\n");
	}
	printf("x=%lf\n",x);
	
}

