#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: \n");
	scanf("%d",&age);
	if(age>18 || age==18)
	{
		printf("Eligible for DL!! \n");
	}
	else
	{
		printf("Not eligible for DL!! \n");
	}
}
