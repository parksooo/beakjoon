#include<stdio.h>
int main()
{
    int a, b, i, j, k, l, m, n, sang1, sang2;
    scanf("%d %d", &a, &b);
    i = a/100;
    j = (a%100)/10;
    k = a%10;
    
    l = b/100;
    m = (b%100)/10;
    n = b%10;
    
    sang1 = (k*100 + j*10 + i);
    sang2 = (n*100 + m*10 + l);
    
    if(sang1 < sang2)
        printf("%d\n", sang2);
    else
        printf("%d\n", sang1);
    return 0;
}