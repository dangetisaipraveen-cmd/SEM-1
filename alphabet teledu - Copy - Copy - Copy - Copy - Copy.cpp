#include<stdio.h>
#include<string.h>
int main()
{ 
	char s1[10],s2[10],choice,s;
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
		case 4:
			printf("Enter first string: ");
			scanf("%[^\n]",s1);
		
		case 5:
			printf("Enter a string: ");
			scanf("%[^\n]",s1);
			
			for(i=0;s1[i]!='\0';i++)
			if(s1[i]>='a' && s1[i]<='z')
			s1[i]= s1[i]-32;
			
			printf("Uppercase string = %s\n",s1);
			break;
			
		case 6:
			printf("Enter a string: ");
			scanf("%[^\n]",s1);
			
			for(i=0;s1[i]!='\0';i++)
			if(s1[i]>='A' && s1[i]<='Z')
			s1[i]= s1[i]+32;
			
			printf("Uppercase string = %s\n",s1);
			break;
		case 7:
			printf("Enter a string: ");
			scanf("%[^\n]",s1);
			
			len=0;
			for(i=0;s1[i]!='\0';i++)
			len++;
			
			printf("Reversed string = ");
			for(i=len-1;i>=0;i--)
			printf("%c",s1[i]);
			
			printf("\n");
			break;
			
			default:
				printf("Invalid choice! Try again.\n");
			}
			return 0;
		}
