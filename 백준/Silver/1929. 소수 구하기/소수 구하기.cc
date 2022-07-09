#include<stdio.h>
int main()
{
    int num1, num2;
    int prime[1000001] = {0};
    prime[1] = 1;
    scanf("%d %d", &num1, &num2);
    for(int i = 2; i <= num2; i++){
        for(int j = 2; j * i <= num2; j++){
            prime[i*j] = 1;
        }
    }
    for(int i = num1; i <= num2; i++){
        if(prime[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}