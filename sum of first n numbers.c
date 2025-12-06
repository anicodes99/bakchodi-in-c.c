#include<stdio.h>
int sum( int number)
{
	
    if(number>0)
    {
        number=number+sum(number-1);
        return number;
	}
	else
	{
	  
	  printf("please enter a number greater than 0");
	  return 0;
	}
}


int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	printf("the sum of first %d number is %d",num,sum(num));
	   return 0;

}
