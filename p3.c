#include<stdio.h>
int main()
{
	int side, perimeter;
	printf("Enter the side of square : \n");
	scanf("%d" ,&side);
	perimeter = 4 * side;
	printf("The perimeter of square is %d = 4 * %d \n", perimeter, side);
	return 0;
}
