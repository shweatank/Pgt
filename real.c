#include <stdio.h>


struct RealorImaginary{

	int real;
	int imag;
	
};


int main(){


	struct RealorImaginary rm[3];
	for(int i=0;i<2;i++){
		printf("enter realnumber:");
		scanf("%d",&rm[i].real);
		printf("enter imaginary:");
		scanf("%d",&rm[i].imag);
	}
	int r,m;
	for(int i=1;i<2;i++){

		r =rm[i-1].real+rm[i].real;
		m =rm[i-1].imag+rm[i].imag;
		printf("%d + %di\n",r,m);
	}
	

	
	
	

}
