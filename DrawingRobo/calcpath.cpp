/*******************************************/
/* Calculating Path of a Mobile Robot                  */
/*                                                                  */
/*                    ZD.Wang original Dec.10, 2007     */
/*                                 revised Dec.1, 2016       */
/*******************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.1415926
#define L 100.0    /* mm  */
#define dt 0.02   /* sec */

int main(){
	FILE *fp1, *fp2;
	int i;
	double v_right, v_left;
	double v, w;
	double x0, y0, tht0;
	double x1, y1, tht1;
	double sin_tht, cos_tht;
	
	if((fp1 = fopen("data.txt", "r"))==NULL){
		fprintf(stderr, "Can not find data.txt\n");
		exit(1);
	}
	if((fp2 = fopen("datapath.txt","w"))==NULL){
		fprintf(stderr, "Can not find datapath.txt\n");
		exit(1);
	}
	
	x1=0.0;   y1=0.0;    tht1=30.0*PI/180;
	
	while(fscanf(fp1, "%lf %lf", &v_right, &v_left) != EOF){
		
		x0 = x1;    y0 = y1;    tht0 = tht1;
		
		v = (v_right + v_left) / 2;
		w = (v_right - v_left) / L;
		tht1 = tht0 + w*dt;
		
		sin_tht = sin( (tht0+tht1)/2.0 );
		cos_tht = cos( (tht0+tht1)/2.0 );
		
		x1 = x0 + v*dt*cos_tht;
		y1 = y0 + v*dt*sin_tht;
		
		fprintf(fp2, "%lf\t%lf\n", x1, y1);
	}
	fclose(fp1);
	fclose(fp2);
	
	printf("左右車輪の速度データから軌道を計算し、datapath.txtに結果をセーブした\n");
	return 0;
}
