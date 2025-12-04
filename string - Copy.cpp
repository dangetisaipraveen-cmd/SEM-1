#include <stdio.h>
int main(){
	char name[100];
	printf("Name: ");
	scanf("%[^\n]",&name);
	char address[100]; 
	printf("Address : ");
	getchar();
	fgets(address,sizeof(address),stdin);   
	printf("you gave %s as name. \n",name);
	printf("your address is : %s",address);
		return 0;
}h
