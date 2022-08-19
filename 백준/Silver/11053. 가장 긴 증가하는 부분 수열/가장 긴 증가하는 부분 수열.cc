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
    int result = 0;
    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(int j = i - 1; j >= 1; j--)
        {
            if(arr[j] < arr[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        result = max(dp[i], result);   
    }
    printf("%d\n", result);
    return 0;
}