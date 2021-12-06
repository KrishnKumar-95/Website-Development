// program to calculate the area of the square using library function
#include <stdio.h>
#include <math.h>
int main()
{
    float side;
    printf("Enter the side of the square : ");
    scanf("%f", &side);
    printf("The area of the square is %f\n", pow(side, 2));

    return 0;
}