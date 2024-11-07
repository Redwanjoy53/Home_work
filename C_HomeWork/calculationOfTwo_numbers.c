#include <stdio.h>
int main()
{
    int num1, num2, addition, subtraction, multiplication, division;
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);
    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = num1 / num2;

    printf(" %d + %d Addition Result is = %d .\n", num1, num2, addition);
    printf(" %d - %d Subtraction Result is = %d .\n", num1, num2, subtraction);
    printf(" %d * %d Multiplication Result is = %d .\n ", num1, num2, multiplication);
    printf(" %d / %d Division Result is = %d .\n", num1, num2, division);

    return 0;
}