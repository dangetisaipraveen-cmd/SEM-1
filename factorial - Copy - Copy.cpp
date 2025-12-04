#include <stdio.h>
int main() {
	int n,i;
	unsigned long long fact=1;
	printf("enter no: ");
	scanf("%d",&n);  
	for(i=1;i<=n;++i) {
	fact *= i;
}
printf("factorial of %d = %llu\n",n,fact);
return 0;
}
