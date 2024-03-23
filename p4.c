#include<stdio.h>

int main() {
    int side, Area;
    
    printf("Enter the side of the square : \n");
    scanf("%d", &side);

    Area = side * side;

    printf("Area of square is %d * %d = %d.\n",side,side,Area);

    return 0;
}

