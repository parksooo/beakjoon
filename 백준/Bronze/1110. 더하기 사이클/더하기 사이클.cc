#include<stdio.h>
int main()
{
    int a, b, i, j, k, l, m, count = 0;
    scanf("%d", &a);
    b = a;
    while(1){
        i = a/10;
        j = a%10;
        k = i + j;
        l = k%10;
        count++;
        m = 10*j + l;
        if(b == m)
            break;
        a = m;
    }
    printf("%d", count);
    return 0;
}