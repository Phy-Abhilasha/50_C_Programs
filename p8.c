#include<stdio.h>
int main()
{
	int Current = 6,Resistance = 2,Power;
	printf("Current = 6 \n");
	printf("Resistance = 2 \n");
	Power = Current * Current * Resistance;
	printf("The power calculated is : %d * %d * %d = %d \n",Current,Current,Resistance,Power);
	return 0;
}
