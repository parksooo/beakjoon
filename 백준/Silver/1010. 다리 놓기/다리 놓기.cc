#include<stdio.h>
#define MAX_SIZE 31

int min(int a, int b)
{
    if(a < b)
        return a;
    else
        return b;
}
long long makebridge(int n, int k)
{
    long long int dp[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= min(i, k); j++){
            if(j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j -1] + dp[i - 1][j];
        }
    }
    return dp[n][k];
}
int main()
{
    int T, n, k;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        scanf("%d %d", &n, &k);
        printf("%lld\n", makebridge(k, n));
    }
    return 0;
}