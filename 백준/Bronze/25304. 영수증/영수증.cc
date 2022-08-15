#include<stdio.h>

int main()
{
    int price, n;
    int result = 0;
    int a, b;
    
    scanf("%d\n", &price);
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        result += a*b;
    }
    if(price == result)
        printf("Yes");
    else
        printf("No");
    return 0;
}