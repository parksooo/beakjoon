#include<stdio.h>
int main()
{
    int a, sum;
    sum = 0;
    scanf("%d", &a);
    for(int i = 0; i <= a; i++){
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}