#include <stdio.h>
int main(){
	float a,t,u,d;
	printf("enter acceleration : ");
	scanf("%f",&a);
	printf("enter time : ");
	scanf("%f",&t);
	printf("enter initial velocity : ");
	scanf("%f",&u);
	d=u*t+a*t*t/2;
	printf("%f",d);
}
