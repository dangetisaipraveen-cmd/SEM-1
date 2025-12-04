#include<stdio.h>
int main()
{
	int i,n,arr[i];
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",arr[i]);
	}
		
}
