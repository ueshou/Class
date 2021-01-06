#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	char text[] = "text.txt";
	int A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0,K=0,L=0,M=0,N=0,O=0,P=0,Q=0,R=0,S=0,T=0,U=0,V=0,W=0,X=0,Y=0,Z=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,SPE=0;
	int chr;
	int sort[52],tmp=0;
	fp = fopen(text, "r");

	while((chr = fgetc(fp))!= EOF){
	//	putchar(chr);

		if(chr=='A') A+=1;
		else if(chr=='B') B+=1;
		else if(chr=='C') C+=1;
                else if(chr=='D') D+=1;
	       	else if(chr=='E') E+=1;
	       	else if(chr=='F') F+=1;
	       	else if(chr=='G') G+=1;
	       	else if(chr=='H') H+=1;
	       	else if(chr=='I') I+=1;
	       	else if(chr=='J') J+=1;
	       	else if(chr=='K') K+=1;
	       	else if(chr=='L') L+=1;
	       	else if(chr=='M') M+=1;
	       	else if(chr=='N') N+=1;
	       	else if(chr=='O') O+=1;
	       	else if(chr=='P') P+=1;
	       	else if(chr=='Q') Q+=1;
	       	else if(chr=='R') R+=1;
	       	else if(chr=='S') S+=1;
	       	else if(chr=='T') T+=1;
	       	else if(chr=='U') U+=1;
	       	else if(chr=='V') V+=1;
	       	else if(chr=='W') W+=1;
	       	else if(chr=='X') X+=1;
	       	else if(chr=='Y') Y+=1;
	       	else if(chr=='Z') Z+=1;
	       	else if(chr=='a') a+=1;
	       	else if(chr=='b') b+=1;
	       	else if(chr=='c') c+=1;
	       	else if(chr=='d') d+=1;
	       	else if(chr=='e') e+=1;
	       	else if(chr=='f') f+=1;
	       	else if(chr=='g') g+=1;
	       	else if(chr=='h') h+=1;
	       	else if(chr=='i') i+=1;
	       	else if(chr=='j') j+=1;
	       	else if(chr=='k') k+=1;
	       	else if(chr=='l') l+=1;
	       	else if(chr=='m') m+=1;
	       	else if(chr=='n') n+=1;
	       	else if(chr=='o') o+=1;
	       	else if(chr=='p') p+=1;
	       	else if(chr=='q') q+=1;
	       	else if(chr=='r') r+=1;
	       	else if(chr=='s') s+=1;
	       	else if(chr=='t') t+=1;
	       	else if(chr=='u') u+=1;
	       	else if(chr=='v') v+=1;
	       	else if(chr=='w') w+=1;
	       	else if(chr=='x') x+=1;
	       	else if(chr=='y') y+=1;
	       	else if(chr=='z') z+=1;
		else if(chr==' ') SPE+=1;
		else if(chr=='!') SPE+=1;
		else if(chr=='?') SPE+=1;
		else{}

	}
	printf("A=%d,B=%d,C=%d,D=%d,E=%d,F=%d,G=%d,H=%d,I=%d,J=%d,K=%d,L=%d,M=%d,N=%d,O=%d,P=%d,Q=%d,R=%d,S=%d,T=%d,U=%d,V=%d,W=%d,X=%d,Y=%d,Z=%d\n",A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z);
	printf("a=%d,b=%d,c=%d,d=%d,e=%d,f=%d,g=%d,h=%d,i=%d,j=%d,k=%d,l=%d,m=%d,n=%d,o=%d,p=%d,q=%d,r=%d,s=%d,t=%d,u=%d,v=%d,w=%d,x=%d,y=%d,z=%d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z);
	printf("SPE=%d\n",SPE);
	

	return 0;
}


