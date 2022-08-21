#include<iostream>

int dp[1001];
int r_dp[1001];
int arr[1001];

int n;

int main()
{
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 1; i <= n; i++){
        dp[i] = 1;
        for(int j = 1; j <= i; j++){
            if(arr[j] < arr[i] && dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        }
    }
    for(int i = n; i >= 1; i--){
        r_dp[i] = 1;
        for(int j = n; j >= i; j--){
            if(arr[i] > arr[j] && r_dp[j] + 1 > r_dp[i])
                r_dp[i] = r_dp[j] + 1;
        }
    }
    
    int result = 0;
    for(int i = 0; i <= n; i++){
        if(result < dp[i] + r_dp[i] - 1)
            result = dp[i] + r_dp[i] - 1;
    }
    printf("%d\n", result);
    return 0;
}