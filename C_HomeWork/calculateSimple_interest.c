#include <stdio.h>
int main()
{
    int simple_interest, principal, rate, time;
    printf("Enter Your Amount : ");
    scanf("%d", &principal);
    printf("Enter Rate of Interest ? : ");
    scanf("%d", &rate);
    printf("For How Many Years ? : ");
    scanf("%d", &time);
    simple_interest = (principal * rate * time) / 100;
    printf("Your simple interest is = %d", simple_interest);

    return 0;
}