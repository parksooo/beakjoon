#include<stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while(n >= 0){
        if(n%5 == 0){
            count += (n/5);
            printf("%d", count);
            return 0;
        }
        n -= 3;
        count++;
    }
    printf("-1");
    return 0;
}