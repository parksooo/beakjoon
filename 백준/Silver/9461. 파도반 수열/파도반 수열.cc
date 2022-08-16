#include<stdio.h>
long long dp[101];

int main()
{
    int t, n;
    scanf("%d", &t);
    dp[1] = dp[2] = dp[3] = 1;
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        for(int j = 4; j <=n; j++)
            dp[j] = dp[j - 3] + dp[j - 2];
        printf("%lld\n", dp[n]);
    }
    return 0;
}