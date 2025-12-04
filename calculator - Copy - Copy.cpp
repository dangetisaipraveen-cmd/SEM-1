#include <stdio.h>
int main(){
	char o;
	double a,b;
	printf("enter operator(+,-,/,*): ");
	scanf(" %c",&o);
	printf("enter operands: ");
	scanf("%lf %lf",&a,&b);
	switch (o) {
		case '+':
			printf("%.2lf + %.2lf =%.2lf",a,b,a+b);
			break;
		case '-':
			printf("%.2lf - %.2lf =%.2lf",a,b,a-b);
			break;
		case '/':
			if(b!=0)
			{
			printf("%.2lf / %.2lf =%.2lf",a,b,a/b);
		}
			break;
		case '*':
			printf("%.2lf * %.2lf =%.2lf",a,b,a*b);
			break;	
		default:
		printf("invalid operator");		
	}
	return 0;
}
