#include <stdio.h>
int digit(int n) {
    int r,s = 0 ;

    while (n>0) {
        r = n%10;
        s += r;
        n = n/10;
    }
    return s;
}
int main()
{
	int n;
	printf("Enter a nmbr: ");
	scanf("%d",&n);
	printf("Sum of digits = %d",digit(n));
	return 0;
}
