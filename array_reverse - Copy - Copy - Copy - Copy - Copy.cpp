#include <stdio.h>
int main() {
	int i,n;
	printf("enter no of array elements: \n");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements: ");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf(" %d ",a[i]);
	}
}
