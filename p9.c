#include<stdio.h>
int main()
{
	int radius;
	float pi = 3.14;
	float perimeter;
	printf("Enter the radius od the circle : ");
	scanf("%d",&radius);
	perimeter = 2 * pi * radius;
	printf("The perimeter of the circle is : %.2f \n",perimeter);
	return 0;
}

