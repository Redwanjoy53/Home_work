#include <stdio.h>
int main()
{
    int perimeter, length, width;
    printf("what is the rectangle length? :  ");
    scanf("%d", &length);
    printf("what is the rectangle width? :  ");
    scanf("%d", &width);
    perimeter = 2 * (length + width);
    printf("Your rectangle perimeter is = %d ",perimeter);

    return 0;
}