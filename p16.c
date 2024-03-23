#include<stdio.h>
int main()
{
	int I1,I2,I3,I4,I5,I6;
	int sum_of_entering,sum_of_leaving;
	printf("Enter the value of currents: \n");
	scanf("%d%d%d%d%d%d",&I1,&I2,&I3,&I4,&I5,&I6);
	sum_of_entering = I1+I2+I4+I5;
	printf("sum of entering current : %d\n",sum_of_entering);
	sum_of_leaving = I3+I6;
	printf("sum of leaving current : %d\n",sum_of_leaving);
	if(sum_of_entering == sum_of_leaving)
	{
		printf("The value of I follows Kirchoff's Law \n");
	}
	else
	{
		printf("The value of I does not follows Kirchoff's Law \n");
	}
}
