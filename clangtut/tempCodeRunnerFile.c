#include <stdio.h>

int result(float *num, float *avg, float *percent, float *sub1, float *sub2, float *sub3)
{
    *num = (sub1 + sub2 + sub3);
    *avg = (num / 3);
    *percent = (num / 3);
}

int main()
{
    float num, avg, percent, sub1, sub2, sub3;
    printf("Enter Hindi marks :- ");
    scanf("%f", &sub1);
    printf("Enter English marks :- ");
    scanf("%f", &sub2);
    printf("Enter Maths marks :- ");
    scanf("%f", &sub3);
    result(&num, &avg, &percent, &sub1, &sub2, &sub3);
    printf("The Average Marks is %d", avg);
    printf("The percentage of the student is %d", percent);
    return 0;
}