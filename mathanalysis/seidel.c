#include<stdio.h>
#include<math.h>                    //絶対値を求める関数「fabs」を使うためにincludeする

double get_x1(double x2, double x3 ){
return((10.0 - x2 - x3)/5.0);        //x1を求める関数
}
double get_x2(double x1, double x3){
return((12.0 - x1 - x3)/4.0);       //x2を求める関数
}
double get_x3(double x1, double x2){
return((13 - 2 * x1 - x2)/3);       //x3を求める関数
}

int main(){
double x1,x2,x3,y1,y2,y3,z1,z2,z3;
int i,n;
x1=x2=x3=1.0; //initial values
printf("繰り返しの回数を入力してください　n=");
scanf("%d",&n);

for(i=0;i<n;i++){
x1=get_x1(x2,x3);
x2=get_x2(x1,x3);
x3=get_x3(x1,x2);
z1=fabs(x1-y1);                    //前回の結果との誤差の絶対値をzに代入
z2=fabs(x2-y2);
z3=fabs(x3-y3);
if(z1<0.00000001 && z2<0.00000001 && z3<0.00000001){   //誤差の絶対値が0.00000001以下のときループを抜ける
 printf("収束した\n");             //ループがすべて終わる前に抜けたとき、収束した宣言をする
 break;    
}                                 
printf("[i=%d] x1 = %.10f,x2 = %.10f,x3 = %.10f\n",i+1,x1,x2,x3);
y1=x1;                             //次のループで求めたxとの誤差を求めるために、今回の結果をyに代入
y2=x2;
y3=x3;
}
return 0;
}
