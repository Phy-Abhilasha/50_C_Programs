#include<stdio.h>

void reverseprintEvennumber()
{
	printf("The first 20 even number in reverse order!! \n");
	int i;
	for(i=40;i>=2;i--)
	{
		if(i%2==0)
			printf("%d\n",i);
	}
}

int main()
{
	reverseprintEvennumber();
	return 0;

}

