#include<stdio.h>
int main()
{
	int i1, i2, i3, i4, i5, i6, Sum;
	printf("Enter the values of current: \n");
	scanf("%d%d%d%d%d%d",&i1,&i2,&i3,&i4,&i5,&i6);
	Sum = i1 + i2 - i3 + i4 + i5 - i6 ;
	printf("The Sum of current is: %d \n",Sum);
	return 0;
}
