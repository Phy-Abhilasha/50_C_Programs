#include<stdio.h>
int main()
{
	float length,Width,Area;
	printf("Enter the length of rectangle:\n");
	scanf("%f" , &length);
	printf("Enter the width of rectangle: \n");
	scanf("%f" , &Width);
	Area = length * Width;
	printf("The area of rectangle is %f = %f * %f \n",Area,length, Width);
	return 0;
}
