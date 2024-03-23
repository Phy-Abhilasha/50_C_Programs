#include<stdio.h>
int main()
{
	int i;
	printf("The First 30 odd numbers: \n");
	for(i=0;i<60;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
