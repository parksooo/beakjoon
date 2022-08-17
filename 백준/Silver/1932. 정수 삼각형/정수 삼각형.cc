#include<iostream>
#include<algorithm>

using namespace std;

int dp[501][501];
int n;

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < i + 1; j++)
            scanf("%d", &dp[i][j]);
    int result = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            if(j == 0)
                dp[i][j] = dp[i - 1][0] + dp[i][j];
            else if(i == j)
                dp[i][j] = dp[i - 1][j - 1] + dp[i][j];
            else
                dp[i][j] = max((dp[i - 1][j - 1] + dp[i][j]), (dp[i - 1][j] + dp[i][j]));
            
            result = max(result, dp[i][j]);
        }
    }
    printf("%d\n", result);
    return 0;
}