#include<stdio.h>
int n;
int dp[41];
int count1 = 0, count2 = 0;

int fib(int N)
{
    if(N == 1 || N == 2)
    {
        count1++;
        return 1;
    }else
        return(fib(N - 1) + fib(N - 2)); 
}

int main()
{
    scanf("%d", &n);
    fib(n);
    
    dp[1] = 1;
    dp[2] = 1;
    
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
        count2++;
    }
    
    printf("%d %d", count1, count2);
    return 0;
}