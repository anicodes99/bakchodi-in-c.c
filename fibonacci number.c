#include <stdio.h>

int main() {
    int a=0;
    int b=1;
    int c;
    int i;
    int n;
    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);



    printf("first %d fibonacci numbers are:\n ",n);
    for (i = 0; i < n; i++) {
        printf("%d,",a);
    	c=a+b;
    	a=b;
    	b=c;
    }

    return 0;
}

