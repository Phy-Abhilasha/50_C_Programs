#include<stdio.h>

void printreverse()
{
	int i,n;
 	printf("Enter the number: \n");	
	scanf("%d",&n);
	printf("The first %d even number in reverse order: \n",n);
	for(i=n;i>=0;i--)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}

}

int main()
{
	printreverse();
	return 0;
}
