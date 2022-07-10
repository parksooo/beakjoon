#include<stdio.h>
int main()
{
    int prime[260000] = {0};
    prime[1] = 1;
    for(int i = 2; i < 260000; i++){
        for(int j = 2; i*j < 260000; j++){
            prime[j*i] = 1;
            }
    }
    int input;
    while(1){    
        int count = 0;
        scanf("%d", &input);
        if(input == 0)
            break;
        for(int i = input + 1; i <= 2*input; i++){
            if(prime[i] == 0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}