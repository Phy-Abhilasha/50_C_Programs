#include<stdio.h>

void printseries()
{
	int n,i;
	printf("Enter the number: \n");
	scanf("%d",&n);
	printf("The series \n");
	for(i=5;i<=n;i+=5)
	{
		printf("%d\n",i);
	}
}

int main()
{
	printseries();
	return 0;
}
