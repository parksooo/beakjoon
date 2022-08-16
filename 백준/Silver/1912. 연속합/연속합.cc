#include<stdio.h>
#define MAX(x, y) x > y ? x : y

int dp[100001];
int arr[100001];

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
        scanf("%d", &arr[i]);
    int res;
    res = arr[0];
    dp[0] = arr[0];
    for(int i = 1; i < t; i++)
    {
        dp[i] = MAX(dp[i - 1] + arr[i], arr[i]);
        res = MAX(dp[i], res);
    }
    printf("%d\n", res);
    return 0;
        
}