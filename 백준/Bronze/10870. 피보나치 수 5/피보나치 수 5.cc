#include<stdio.h>
int fibonacci(int n)
{
    if(n == 0 || n == 1)
        return n;
    return(fibonacci(n - 2) + fibonacci(n - 1));
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fibonacci(num));
    return 0;
}