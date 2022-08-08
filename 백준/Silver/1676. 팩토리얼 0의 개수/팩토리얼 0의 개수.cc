#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int f, f1, f2;
    f = n / 5;
    f1 = n /25;
    f2 = n / 125;
    
    printf("%d", f + f1 + f2);
    return 0;
}