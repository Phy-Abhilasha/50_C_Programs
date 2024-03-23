#include<stdio.h>
int main()
{
	int Voltage = 50,Current = 2,Resistance;
	printf("Voltage = 50 \n");
	printf("Current = 2 \n");
	Resistance = Voltage/Current;
	printf("The Resistance calculated is : %d / %d = %d \n",Voltage,Current,Resistance);
	return 0;
}

