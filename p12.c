#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter two numbers: \n");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	{
		printf("The bigger value is : %d\n",num1);
	}
	else
	{
		printf("The bigger value is : %d\n",num2);
	}
	return 0;
}
