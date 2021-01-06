#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	int count,r;
	srand((unsigned)time(NULL));
	r=rand()%10;
	printf("%d\n",r);
	
	
	if(r>5){
		printf("more5\n");
	}
	else{
		printf("less5\n");
	}

	return 0;

}

