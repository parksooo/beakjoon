#include<stdio.h>
int main()
{
    long a, b, v;
    long result = 0;
    scanf("%ld %ld %ld", &a, &b, &v);
    result = (v - b - 1)/(a - b) + 1;
    printf("%ld", result);
    return 0;
}