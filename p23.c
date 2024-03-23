#include<stdio.h>
int main()
{
	int i,num1,num2;
	printf("Enter the first number: \n");
	scanf("%d",&num1);
	printf("Enter the last number: \n");
	scanf("%d",&num2);
	printf("The Even number between %d to %d is: ",num1,num2);
	for(i=num1;i<=num2;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

