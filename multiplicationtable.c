#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("multiplication table for %d is as follows:\n",num);
	
	
	int i=1;
	for( ;i < 11; i++)
	{
		printf("%d X %d is %d\n",num,i,num*i);
	}
	return 0;
}
