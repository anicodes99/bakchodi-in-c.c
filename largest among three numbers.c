#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a:\n");
	scanf("%d",&a);
	printf("enter b:\n");
	scanf("%d",&b);
	printf("enter c:\n");
	scanf("%d",&c);
	int largest;
	largest= (a>b) ? ((a>c) ?a:c) : ((b>c) ? b:c);
	printf("the largest among three numbers:%d",largest);
	  return 0;
}
