#include <stdio.h>
int main()
{
    int hour, minutes, seconds;
    printf(" Hour : ");
    scanf("%d",&hour);
    minutes = hour * 60;
    seconds = minutes * 60;
    printf(" Total minutes = %d \n", minutes);
    printf(" Total seconds = %d \n", seconds);

    return 0;
}