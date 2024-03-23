#include<stdio.h>

void printreverse()
{
	int i;
	printf("The first 20 natural numbers in reverse order \n");
	for(i=20;i>=1;i--)
	{
		printf("%d\n",i);
	}
}

int main()
{
	printreverse();
	return 0;
}
