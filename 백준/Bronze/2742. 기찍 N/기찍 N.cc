#include<stdio.h>
int main()
{
    int n, i = 0;
    scanf("%d", &n);
    while(i < n){
        i++;
    }
    while(i > 0){
        printf("%d\n", i);
        i--;
    }
    return 0;
}