#include<stdio.h>

long long dp[101][10];
int n;

int main()
{
    scanf("%d", &n);
    
    for(int i = 1; i < 10; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= n; i++){
        for(int j = 0; j < 10; j++){
            if(j == 0)
                dp[i][j] = dp[i - 1][1];
            else if(j == 9)
                dp[i][j] = dp[i - 1][8];
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            
            dp[i][j] = dp[i][j] % 1000000000;
        }
    }
    long long result = 0;
    for(int i = 0; i < 10; i++)
        result += dp[n][i];
    printf("%lld\n", result % 1000000000);
    return 0;
}