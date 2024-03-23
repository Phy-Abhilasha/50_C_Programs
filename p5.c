#include<stdio.h>
int main()
{
	float a,b,c,Average;
	printf("Enter three numbers: \n");
	scanf("%f%f%f",&a,&b,&c);
	Average = ( a + b + c)/3;
	printf("The average of three numbers : (%.2f + %.2f + %.2f)/3 = %.2f\n",a,b,c,Average);
	return 0;
}
