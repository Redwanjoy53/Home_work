#include <stdio.h>
int main()
{
    double miles = 0.621371, kilometer, distance;
    printf("Kilometers : ");
    scanf("%lf", &kilometer);
    distance = kilometer * miles;
    printf("%.0lf kilometers = %lf miles. ", kilometer, distance);

    return 0;
}