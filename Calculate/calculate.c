#include<stdio.h>
int main()
{
	double a, b, ans;
	char c;
	while(1){
		scanf("%lf %c %lf",&a, &c, &b);
		switch(c){
			case'+':ans = a + b; break;
			case'-':ans = a - b; break;
			case'*':ans = a * b; break;
			case'/':if(b == 0){
					printf("error:0で割ることはできません");
				}
				ans = a / b; break;
		}
		
		printf("%lf\n",ans);
	
	}
	return 0;
}

