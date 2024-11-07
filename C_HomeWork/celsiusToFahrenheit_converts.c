#include <stdio.h>
int main()
{
    int celsius, fahrenheit;
    printf("Enter The Celsius Temperature : ");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("The Fahrenheit Temperature is = %d ", fahrenheit);

    return 0;
}