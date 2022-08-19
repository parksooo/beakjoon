#include<iostream>
#include<algorithm>

using namespace std;

int arr[10001];
int dp[10001];

int n;

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    
    for(int i = 1; i <= n; i++)
    {
        dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
        dp[i] = max(dp[i - 1], dp[i]);
    }
    printf("%d\n", dp[n]);
    return 0;
}