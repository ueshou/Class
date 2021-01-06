#include<stdio.h>


int  main(){
	int n, a;
        printf("nを入力してください n=");

	scanf("%d",&n);
	
	for(a=n-1;a>0;a--){
		n *=a;
		
	}
	
	printf("nの階乗は...%d\n",n);
	return 0;
}



