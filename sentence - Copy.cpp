#include <stdio.h>
int main() {
	char s[100],i;
	printf("enter a sentence:\n");
	fgets(s,sizeof(s),stdin);
	printf("Words in a sentence are :\n");
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='  ')
		{
			printf("\n");
		}
		else
		{
			printf("%c",s[i]);
		}
	}
}
