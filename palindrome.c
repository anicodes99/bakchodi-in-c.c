#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],rev[100];
	printf("enter a string: ");
	scanf("%d",&str);
	strcpy(rev,str);
	strrev(rev);
	if(strcmp(str,rev)==0)
		printf("it is a palindrome");
	
	else
		printf("it is not a palindrome");
	
}

