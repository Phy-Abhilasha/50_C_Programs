#include<stdio.h>

void print()
{
	int i;
	printf("TABLE OF 3 \n");
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",3,i,3*i);
	}
}
int main()
{
	print();
	return 0;
}

