#include<stdio.h>
#include<math.h>

#define PI 3.1415926535

		int main(){

		      double x, y, d;
		      int F=0;
		      char sw,f;
			 scanf("%lf",&x);
		for(;;){
			 while(F == 0){
			      scanf("%c",&sw);
				   while(sw=='\n')
						  scanf("%c",&sw);
				 if(sw == 'f'){
					F = 1;break; 
		}else if(sw == 'q')
		return 0;
					 scanf("%lf",&y);
				       switch(sw){
						   case '+':x+=y;break;
						   case '-':x-=y;break;
						   case '*':x*=y;break;
						   case '/':if(y==0){
							      printf("error\n");continue;

								      } 
							   x/=y;break;

						   default:printf("error\n");
		}
			       printf("=%lf\n",x);
				 
		}
			while(F == 1){
			      scanf("%c",&sw);
				      while(sw=='\n')
					    scanf("%c",&sw);
		    if(sw == 'a'){
		F = 0;break;
		}else if(sw == 'q')
		return 0;


			   scanf("%c %lf",&f, &d);
				  switch(f){
					   case 's':y = sin(d*PI/180);break;
					   case 'c':y = cos(d*PI/180);break;
					   case 't':y = tan(d*PI/180);break;
					   default:printf("error\n");
		}
				  switch(sw){
						 case '+':x+=y;break;
						 case '-':x-=y;break;
						 case '*':x*=y;break;
						 case '/':if(y==0){
							      printf("error\n");continue;

								      } 
							   x/=y;break;
		}
			  printf("=%lf\n",x);

		}
		}
	return 0;



		   
	}

			    


