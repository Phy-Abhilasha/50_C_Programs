#include<stdio.h>
int main()
{
	int V,I,R1,R2,R3;
	float Rx;
	printf("Enter voltage:\n");
	scanf("%d",&V);
	printf("Enter Current:\n");
	scanf("%d",&I);
	printf("Enter the value of resistance: \n");
	scanf("%d%d%d",&R1,&R2,&R3);
	Rx = (R2/R1)*R3;
	printf("The value of Rx is calculated as: %f\n",Rx);
	return 0;
}
