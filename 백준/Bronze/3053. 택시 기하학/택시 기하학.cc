#include<stdio.h>
#define PI 3.14159265359

int main()
{
    int r;
    double result1, result2;
    
    scanf("%d", &r);
    result1 = (double)r * r * PI;
    result2 = (double)r * r * 2;
    
    printf("%.6f\n%.6f", result1, result2);
    return 0;
}