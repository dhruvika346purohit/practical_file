#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,add,sub,mul,div,modul,choice;
	
	printf("enter the value of a=");
	scanf("%d",&a);
	printf("enter the value of b=");
	scanf("%d",&b);
	printf("enter your choice=\n1=addition\n2=substraction\n3=multiplication\n4=division\n5=modul\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:add=a+b;
		printf("addition is %d",add);
		break;
		
		case 2:sub=a-b;
		printf("substraction is %d",sub);
		break;
		
		case 3:mul=a*b;
		printf("multiplication is %d",mul);
		break;
		
		case 4:div=a/b;
		printf("divition is %d",div);
		break;
		
		case 5:modul=a%b;
		printf("modul is %d",modul);
		break;
		
		default :
			printf("enter valid input!");
	}
	return 0; 
}
