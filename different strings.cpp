#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10],choice,si;
	printf("\n 1.,stringlength");
	printf("\n 2.,stringcopy");
	printf("\n 3.,string compare");
	printf("\n 4.,string reverse");
	printf("\n 5.,string concentration");
	printf("\n 6.,string lowercase");
	printf("\n 7.,string uppercase");
	printf("\nenter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 1:
		{
		printf("enter the string");
		scanf("%[^\n]",s1);
		len=0;
		for(i=0;s1[i]!='\0';i++)
		len++;
		printf("length of string=%d\n",len);
	break;
		}
	case 2:
		{
		printf("enter source string");
	   scanf("%[^\n]",s1);
	    for(i=0;s[i]!=0'\0';i++)
	    
	    printf("copied string is%s",s2);
	    break;
		}
