#include <stdio.h>
int main() {
	int n,i,s=0;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("sum is %d\n",s);
	return 0;
}
