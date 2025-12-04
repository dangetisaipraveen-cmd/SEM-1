#include <stdio.h>
int main() {
	int n,r,s=0,o;
	printf("enter number: ");
	scanf("%d",&n);
	o=n;
	while(n>0)
	{
	r=n%10;
	s=s+(r*r*r);
	n=n/10;
}
	if(s==n)
	{
		printf("armstrong num");
	}
	else
	{
		printf("not");
	}
	return 0;
	
}
