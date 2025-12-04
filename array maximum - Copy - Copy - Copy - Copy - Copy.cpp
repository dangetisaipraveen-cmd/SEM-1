 #include <stdio.h>
 int main () {
 	int n,i,a[10];
 	printf("enter n value: ");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",a[i]);
	 }
	 int max=a[0];
	 for (i=0;i<n;i++)
	 {
	 	if(a[i]>max)
	 	{
	 		max = a[i];
		 }
	 }
	 printf("maximum element is: %d",max);
 
 return 0;
 }
