#include <stdio.h>
int main() {
	int n=3;
	if (n==3)
	{
		goto next;
		printf(" it is three bro \n");
	}
	next:
	printf("it is not three");
	return 0;
}
