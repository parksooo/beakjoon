#include<stdio.h>

int is_prime(int n){
    int prime = 0;
    for(int i = 2; i <= n; i++){
        if(n == i)
            prime = n;
        if(n%i == 0)
            break;
    }
    return prime;
}

int main()
{
    int a, b;
    int sum = 0, first = 0;
    scanf("%d\n%d", &a, &b);
    for(int i = a; i <= b; i++){
        if(is_prime != 0)
            sum += is_prime(i);
    }
    for(int i = a; i <= b; i++){
        if(is_prime(i) != 0){
            first = is_prime(i);
            break;
        }
    }
    printf("%d\n", sum == 0 ? -1 : sum);
    if(first != 0)
        printf("%d", first);
    return 0;
}