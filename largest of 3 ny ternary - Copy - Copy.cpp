#include <stdio.h>
int main() {
	int a,b,c;
	printf("enter a,b,c values : ");
	scanf("%d %d %d",&a,&b,&c);
	int L;
	L=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d is largest",L);
	return 0;
}
