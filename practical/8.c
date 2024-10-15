#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("factorial is %d is %d",n,fact);
	return 0;
}
