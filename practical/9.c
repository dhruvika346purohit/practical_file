#include<stdio.h>
#include<conio.h>
int main()
{
	int num,originalnum,reversednum=0,reminder;
	printf("enter the value of num=");
	scanf("%d",&num);
	originalnum=num;
	while(num!=0)
	{
		reminder=num%10;
		reversednum=reversednum*10+reminder;
		num=num/10;
	}
	if(originalnum==reversednum)
	{
		printf("%d is palindrome",originalnum);
	}
	else
	{
		printf("%d is not palidrome",originalnum);
	}
	return 0;
}
