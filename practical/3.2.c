#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=100;i>=0;i--)
	{
		if(i%10==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
