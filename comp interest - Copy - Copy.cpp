#include <stdio.h>
#include <math.h>
int main (){
	float P,T,R;
	printf("enter principle amount : ");
	scanf("%f",&P);
	printf("enter time : ");
	scanf("%f",&T);
	printf("enter rate of interest : ");
	scanf("%f",&R);
	printf("CI = %.1f",P*(pow(1+(R/100),T)-1));
	return 0;
}
