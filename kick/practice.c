#include<stdio.h>

	struct person{
		int id;
		char *name;
		long phone;
	};
	int main(void){

	struct person student[]={
	{825,"LisaImai",12345678910},
	{320,"SayoHikawa",23456789101},
	{703,"AkoUdagawa",34567891012},
	{1017,"RinkoSirikane",45678910123},
	{1026,"YukinaMinato",56789101234}
	};
	for(int i = 0; i<5;i++){
	printf("%d, %s, %ld\n",student[i].id,student[i].name,student[i].phone);


	}
	}
