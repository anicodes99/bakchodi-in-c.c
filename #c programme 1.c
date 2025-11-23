#include<stdio.h>
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	int revnum=0;
	while(num)
	{
		revnum=revnum*10+num%10;
		num/=10;
		
	}
	printf("%d",revnum);
	
}
