#include<stdio.h>
int main()
{
    int prime[10001];
    prime[1] = 1;
    for(int i = 2; i < 10001; i++){
        for(int j = 2; j*i < 10001; j++){
            prime[j*i] = 1;
        }
    }
    
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int num;
        scanf("%d", &num);
        if(prime[num/2] == 0)
            printf("%d %d\n", num/2, num/2);
        else if(prime[num/2] == 1){
            for(int i = num/2 + 1; i < num; i++){
                if(prime[i] == 0){
                    if(prime[num - i] == 0){
                        printf("%d %d\n", num - i, i);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}