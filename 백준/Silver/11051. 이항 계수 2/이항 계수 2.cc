#include<stdio.h>
#include<stdlib.h>

int mini(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}
int nCk(int n, int k)
{
    int dp[n + 1][k + 1];
    
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= mini(i, k); j++){
            if(j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i - 1][j -1] + dp[i - 1][j]) % 10007;
        }
    }
    return dp[n][k];
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    printf("%d", nCk(n, k));
    return 0;
}