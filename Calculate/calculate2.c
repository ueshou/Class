#include<stdio.h>
#include<math.h>

int main(){
     double x, y, d;
     char op, f, F;
     printf("三角関数を使う場合はs、c、t、のいずれかで入力してください\n");
     printf("整数を使う場合はaを、三角関数を使う場合はfを押してください\nexample1:3→a3\nexample2:sin30→fs30\n");
     printf("終了⇨Ctrl+c\n");
     scanf("%c",&F);
     if(F == 'a'){
	     scanf("%lf",&x);
     }
     else if(F == 'f'){
	     scanf("%c %lf",&f,&d);
	     switch(f){
		     case 's':x = sin(d*3.14159/180);break;
		     case 'c':x = cos(d*3.14159/180);break; 
		     case 't':x = tan(d*3.14159/180);break;
		     default:printf("error\n");
	     }
     }
     else{
	     printf("error\n");
	     
     }
     while(1){
	     scanf("%c",&op);
             
    while(op == '\n')
           scanf("%c", &op);
	    
           scanf("%c",&F);
          if(F == 'a'){
		     scanf("%lf",&y);
	     }
	     else if(F == 'f'){
		     scanf("%c %lf",&f,&d);
		     switch(f){
			     case 's':y = sin(d*3.14159/180);break;
			     case 'c':y = cos(d*3.14159/180);break;
			     case 't':y = tan(d*3.14159/180);break;
			     default:printf("error\n");
		     }
	     }
	     else {
		     printf("error\n");
	     }
	     switch(op){
		     case '+':x += y;break;
		     case '-':x -= y;break;
		     case '*':x *= y;break;
		     case '/':if(y == 0){
				      printf("error\n");continue;
			      }
			      
			      x /= y;break;
		     default:printf("error\n");
	     }
	     printf("=%lf\n",x);
   }
   
   return 0;
}

     
