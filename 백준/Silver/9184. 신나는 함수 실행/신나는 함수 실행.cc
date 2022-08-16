#include<stdio.h>
int dp[22][22][22];

int w(int a, int b, int c)
{
    int l, m, n, o;
    if(a <= 0 || b <= 0 || c <= 0)
        return 1;
    if(a > 20 || b > 20 || c > 20)
        return w(20, 20, 20);
    if(dp[a][b][c] == 0)
    {
        if(a < b && b < c)
        {    
            l = w(a, b, c - 1);
            m = w(a, b - 1, c - 1);
            n = w(a, b - 1, c);
            dp[a][b][c - 1] = l;
            dp[a][b - 1][c - 1] = m;
            dp[a][b - 1][c] = n;
            return(l + m - n);
        }
        else
        {
            l = w(a - 1, b, c);
            m = w(a - 1, b - 1, c);
            n = w(a - 1, b, c - 1);
            o = w(a - 1, b - 1, c - 1);
            dp[a - 1][b][c] = l;
            dp[a - 1][b - 1][c] = m;
            dp[a - 1][b][c - 1] = n;
            dp[a - 1][b - 1][c - 1] = o;
            return (l + m + n - o);
        }
    }
    else
        return (dp[a][b][c]);
}
int main()
{
    while(1)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a == -1 && b == -1 && c == -1)
            break;
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
    }
    return 0;
}