#include<stdio.h>
#include<string.h>
int main()
{
	int i, n;
	int fact=1;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The Factorial of the number is:%d",fact);
	return 0;
}
