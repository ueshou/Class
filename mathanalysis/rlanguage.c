#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=1000;
	float r=0;
	
	for(int i=0;i<n;++i){
		r=rand()%13758+1;
		if(r>=0 && r<= 66) printf("A");
		else if(r>67 && r<= 86) printf("B");
		else if(r>87 && r<= 100) printf("C");
		else if(r>101 && r<= 150) printf("D");
		else if(r>151 && r<= 159) printf("E");
		else if(r>160 && r<= 162) printf("F");
		else if(r>163 && r<= 187) printf("G");
		else if(r>188 && r<= 196) printf("H");
		else if(r>120 && r<= 316) printf("I");
		else if(r>316 && r<= 316) printf("J");
		else if(r>317 && r<= 321) printf("K");
		else if(r>322 && r<= 333) printf("L");
		else if(r>334 && r<= 357) printf("M");
		else if(r>358 && r<= 362) printf("N");
		else if(r>363 && r<= 374) printf("O");
		else if(r>375 && r<= 381) printf("P");
		else if(r>382 && r<= 383) printf("Q");
		else if(r>384 && r<= 387) printf("R");
		else if(r>388 && r<= 409) printf("S");
		else if(r>410 && r<= 426) printf("T");
		else if(r>427 && r<= 429) printf("U");
		else if(r>430 && r<= 430) printf("V");
		else if(r>431 && r<= 461) printf("W");
		else if(r>462 && r<= 462) printf("X");
		else if(r>463 && r<= 472) printf("Y");
		else if(r>472 && r<= 472) printf("Z");
		else if(r>473 && r<= 1317) printf("a");
		else if(r>1318 && r<= 1490) printf("b");
		else if(r>1491 && r<= 1682) printf("c");
		else if(r>1683 && r<= 2160) printf("d");
		else if(r>2161 && r<= 3568) printf("e");
		else if(r>3569 && r<= 3791) printf("f");
		else if(r>3792 && r<= 4048) printf("g");
		else if(r>4049 && r<= 4662) printf("h");
		else if(r>4663 && r<= 5306) printf("i");
		else if(r>5307 && r<= 5314) printf("j");
		else if(r>5315 && r<= 5404) printf("k");
		else if(r>5405 && r<= 5972) printf("l");
		else if(r>5973 && r<= 6191) printf("m");
		else if(r>6192 && r<= 7057) printf("n");
		else if(r>7058 && r<= 7851) printf("o");
		else if(r>7852 && r<= 7990) printf("p");
		else if(r>7991 && r<= 7998) printf("q");
		else if(r>7999 && r<= 8618) printf("r");
		else if(r>8619 && r<= 9277) printf("s");
		else if(r>9278 && r<= 10199) printf("t");
		else if(r>10200 && r<= 10511) printf("u");
		else if(r>10512 && r<= 10614) printf("v");
		else if(r>10615 && r<= 10874) printf("w");
		else if(r>10875 && r<= 10890) printf("x");
		else if(r>10891 && r<= 11147) printf("y");
		else if(r>11148 && r<= 11153) printf("z");
		else if(r>11154 && r<= 13758) printf(" ");

	}
	printf("\n");
	return 0;

}
