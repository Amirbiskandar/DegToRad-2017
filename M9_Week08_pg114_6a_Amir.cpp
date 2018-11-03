#include<stdio.h>

main()
{
	int deg=0;
	float rad, ratio=(3.142/180);
	printf("Degree to Radians\n");
	do{
		rad=ratio*deg;
		printf("%d\t  %.2f\n",deg, rad);
		deg+=10;
	}while(deg<=100);
}
