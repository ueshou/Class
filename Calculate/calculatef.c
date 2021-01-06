#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main(){

	double x, y, a, b;
	char op, f;
	scanf("%c %lf",&f, &a);
	if(f == 's'){
		x = sin(a*PI/180);
	}
	else if(f == 'c'){
			x = cos(a*PI/180);
		}
	else if(f == 't'){
		x = tan(a*PI/180);
	}
	else{
		printf("error\n");
	}

	while(1){
		scanf("%c",&op);
		while(op == '\n')
			scanf("%c",&op);

		scanf("%c %lf", &f, &b);
		if(f == 's'){
			y = sin(b*PI/180);
		}
		else if(f == 'c'){
			y = cos(b*PI/180);
		}
		else if(f == 't'){
			y = tan(b*PI/180);
		}
		else{
			printf("error\n");
		}

		switch(op){
			case'+':x += y;break;
			case'-':x += y;break;
			case'*':x *= y;break;
			case'/':if(y == 0){
					printf("error\n");
				}
				x /= y;break;
			default:printf("error\n");
		}
		printf("=%lf\n",x);
	}
	return 0;
}

                              

