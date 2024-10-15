#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=0;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<5;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			
			if(k%2==0)
			{
				printf("0 ");	
			}
			else
			{
				printf("1 ");
			}
			k++;
		}
		printf("\n");
	}
	return 0;
}
