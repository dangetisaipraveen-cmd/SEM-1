#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	int c=a+b;
	printf("\nsum of %d and %d is:%d",a,b,a+b);
	printf("\nsubtraction of %d and %d is:%d",a,b,a-b);
	printf("\nproduct of %d and %d is :%d",a,b,a*b);
	printf("\ndivision of %d and %d is :%d",a,b,a/b);
	printf("\nremainder of %d and %d is :%d",a,b,a%b);
	return 0;
}
	
