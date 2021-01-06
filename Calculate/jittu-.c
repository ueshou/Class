#include<stdio.h>

int main(){
		int x, y;
	char sw;
	scanf("%d",&x);
	while(1){
	scanf("%c",&sw);
		while(sw == '\n')
			scanf("%c", &sw);
		scanf("%d",&y);

		switch(sw){
			case '+': x += y; break;
			case '-': x -= y; break;
			case '*': x *= y; break;
			case '/': if(y == 0){
					  printf("error\n");continue;
				  }
					  x /= y; break;
				  
					  default:printf("error\n");
		}
		printf("=%d\n",x);
	}
	return 0;
}


