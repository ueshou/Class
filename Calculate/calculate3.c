#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
int main(void){
	int change=0; //四則演算、三角関数切り替え
	float n1=0;//number1
	float n2=0;//number2
	char cl1;//sin cos tan
	char cl2;//sin cos tan
	char k;//+-*/ 符号
	float result=0;//結果
	int check=0;//1=２回目以降の計算
	while(1){
	printf("\n1or2: 1=四則演算//2=三角関数\n");
	scanf("%d",&change);
	if(change==2){
		if(check==0){		
			scanf("%*c%c%*c%*c%f%c%c%*c%*c%f",&cl1,&n1,&k,&cl2,&n2);
			if(cl1=='s'){	
				n1 = sin(n1*PI/180);
			}
			else if(cl1=='c'){
				n1 = cos(n1*PI/180);
			}
			else if(cl1=='t'){
				n1 = tan(n1*PI/180);
			}			
			if(cl2=='s'){	
				n2 = sin(n2*PI/180);
			}
			else if(cl2=='c'){
				n2 = cos(n2*PI/180);
			}
			else if(cl2=='t'){
				n2 = tan(n2*PI/180);
			}
			else{
				exit(0);	
			}	
			check=1;
		}
		else{
			scanf("%c%c%*c%*c%f",&k,&cl2,&n2);			
			n1=result;			
			if(cl2=='s'){	
				n2 = sin(n2*PI/180);
			}
			else if(cl2=='c'){
				n2 = cos(n2*PI/180);
			}
			else if(cl2=='t'){
				n2 = tan(n2*PI/180);
			}
			else{
				exit(0);	
			}	
		}
		
		switch(k){
			case '+':
				result = n1+n2;
				printf("%f\n",result);
				break;
			case '-':
				result = n1-n2;
				printf("%f\n",result);
				break;
			case '*':
				result = n1*n2;
				printf("%f\n",result);
				break;
 角関数切り替え
        float n1=0;//number1
        float n2=0;//number2
        char cl1;//sin cos tan
        char cl2;//sin cos tan
        char k;//+-*/ 符号			case '/':
			 角関数切り替え
        float n1=0;//number1
        float n2=0;//number2
        char cl1;//sin cos tan
        char cl2;//sin cos tan
        char k;//+-*/ 符号	result = n1/n2;
				printf("%f\n",result);
				break;
		}

	}
	if(change==1){
		if(check==0){	
			scanf("%f%c%f",&n1,&k,&n2);
			check=1;
		}
		else{		
			scanf("%*c%c%f",&k,&n2);
			n1=result;		
		}
			switch(k){
				case '+':
					result = n1+n2;
					printf("%f\n",result);
					break;
				case '-':
					result = n1-n2;
					printf("%f\n",result);
					break;
				case '*':
					result = n1*n2;
					printf("%f\n",result);
					break;
				case '/':
					result = n1/n2;
					printf("%f\n",result);
					break;
			}
	}
	}
}
