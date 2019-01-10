#include<stdio.h>
int check(int);
main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	check(n);
	printf("\n%d",n);
}
int check(int n)
{
	
	if(n%3==0&&n%5==0)
	{
		printf("the number is divisible by 3 and 5");
	}
	else
	{
		printf("the number is not divisible by 3 and 5");
    }
}
