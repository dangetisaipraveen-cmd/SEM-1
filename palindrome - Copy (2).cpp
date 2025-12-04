#include <stdio.h>
int main() {
	int n,o,rev=0,rem;
	printf("enter number: ");
	scanf("%d",&n);
	o=n;
	while(n!=0){
		rem = n % 10;
		rev = rev*10+rem;
		n = n / 10; 
	}
	if (o==rev)
	{
		printf("palindrome\n");
	}
	else 
	{
		printf("kadu bro");
	}
	return 0;
}
