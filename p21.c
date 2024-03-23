#include<stdio.h>
int main()
{
	int i,count=20;
	printf("The first 10 even number \n");
	for(i=0;i<count;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
