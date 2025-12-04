#include <stdio.h>
 int main () {
 	int a,b,r,i;
 	printf("enter a value: ");
 	scanf("%d",&a);
 	printf("enter b value: ");
 	scanf("%d",&b);
 	r=a;
 	for(i=1;i<b;i++)
 	{
 		r+=a; 
	 }
	 printf("product is %d",r);
	 return 0;
}
