#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	int birth;
	char name[40];
	fp = fopen("datafil.txt","r");
        while(fscanf(fp,"%d %s",&birth,name)!=EOF){
		printf("%d,%s\n",birth,name);
		}
	fclose(fp);
	return 0;

}

