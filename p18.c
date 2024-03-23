#include<stdio.h>
int main()
{
	int age;
	printf("Enter Your Age: \n");
	scanf("%d",&age);
	if(age<=5)
	{
		printf("You are NICE CHILD!! \n");
	}	
	else if(age<=10)
	{
		printf("You are NICE KID!! \n");
	}
	else if(age<=15)
	{
		printf("You are TEENAGER!! \n");
	}
	else if(age<=25)
	{
		printf("You are YOUNG DYNAMIC!! \n");
	}
	else if(age<=50)
	{
		printf("You are at the MIDDLE AGE!! \n");
	}
	else
	{
		printf("You are OLD \n");
	}
}
