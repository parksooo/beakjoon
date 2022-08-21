#include<iostream>
#include<algorithm>

using namespace std;

struct LINE{
    int left;
    int right;
};

int dp[101];
LINE line[101];

int n;

bool cmp(LINE a, LINE b)
{
    if(a.left < b.left)
        return true;
    return false;
}

int main()
{
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
        scanf("%d %d", &line[i].left, &line[i].right);
    
    sort(line + 1, line + n + 1, cmp);
    
    int result = 0;
    
    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for(int j = 1; j < i; j++)
        {
            if(line[i].right > line[j].right)
                dp[i] = max(dp[i], dp[j] + 1);
        }
        result = max(result, dp[i]);
    }
    printf("%d\n", n - result);
    return 0;
}