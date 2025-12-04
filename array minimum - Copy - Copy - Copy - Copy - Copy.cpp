#include <stdio.h>
int main() {
	int n,i,a[10];
	printf("enter n value: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" %d \n",a[i]);
	}
	int min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("min element is %d",min);
	return 0;
}
