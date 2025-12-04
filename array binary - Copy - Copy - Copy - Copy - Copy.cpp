#include <stdio.h>
int main () {
	int i,low,high,mid,n,found=0;
	printf("enter n value: ");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter key value: ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid = (low+high)/2;
		if (mid==high)
		{
			printf("element found at %d:",mid);
			break;
		}
		else if (key<mid)
		{
			high = mid-1;
			break;
		}
		else 
		{
			low = mid+1;
		}
	}
}
