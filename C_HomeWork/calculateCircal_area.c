#include <stdio.h>
int main()
{
    float radius, area, PI = 3.14;
    printf("Please Enter the radius of circle : ");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("The area of a circle is = %.2f",area);

    return 0;
}