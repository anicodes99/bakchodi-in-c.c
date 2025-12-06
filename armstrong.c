#include<stdio.h>
int main()
{
	int num,original,sum=0,digit;
	printf("enter a number:");
	scanf("%d",&num);
	original=num;
	while(num>0){
		digit=num%10;
		sum+=digit*digit*digit;
		num/=10;
	}
	if(sum==original){
		printf("it is an armstrong number");
	}
	else{
		printf("it is not an armstrong number");
	}
}
