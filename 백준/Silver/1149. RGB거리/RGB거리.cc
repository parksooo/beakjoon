#include<iostream>
#include<algorithm>

using namespace std;

int check[1001][3];
int cost[3];
int n;

int main()
{
    scanf("%d", &n);
    check[0][0] = 0;
    check[0][1] = 0;
    check[0][2] = 0;
    for(int i = 1; i <= n; i++){
        scanf("%d %d %d", &cost[0], &cost[1], &cost[2]);
        
        check[i][0] = min(check[i - 1][1], check[i - 1][2]) + cost[0];
        check[i][1] = min(check[i - 1][0], check[i - 1][2]) + cost[1];
        check[i][2] = min(check[i - 1][0], check[i - 1][1]) + cost[2];
    }
    printf("%d\n", min(check[n][0], min(check[n][1], check[n][2])));
    return 0;
}