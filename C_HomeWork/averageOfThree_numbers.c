#include <stdio.h>
int main()
{
    int num1, num2, num3, average;
    printf(" Enter Three positive Numbers :  ");
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3;
    printf(" There average number is = %d", average);

    return 0;
}