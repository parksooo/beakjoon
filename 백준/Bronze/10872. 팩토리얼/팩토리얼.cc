#include<stdio.h>
int factorial(int nb)
{
    int result = 1;
    if(nb > 1)
        result = nb*factorial(nb - 1);
    return result;
}
int main()
{
    int input;
    scanf("%d", &input);
    printf("%d", factorial(input));
    return 0;
}