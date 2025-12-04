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
	 	printf(" %d ",a[i]);
	 }
	 int temp;
	 for(i=0;i<n-1;i++)
	 {
	 for(int j=0;j<n-1;j++)	
	 {
	 	if(a[j]>a[j+1])
	 	{
	 		temp=a[j];
	 		a[j]=a[j+1];
	 		a[j+1]=temp;
		 } 
	 }
	 }
	 printf("\n");
	 printf("ascending order: ");
	 for(int m=0;m<n;m++) 
	 {
	 	printf(" %d ",a[m]);
	 }
 }
