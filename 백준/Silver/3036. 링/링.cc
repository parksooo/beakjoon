#include<stdio.h>
int g_gcd(int a, int b)
{
    if(a % b == 0)
        return b;
    else
        return g_gcd(b, a % b);
}
int main()
{
    int n;
    scanf("%d", &n);
    int ring[101];
    int gcd;
    
    for(int i = 0; i < n; i++)
        scanf("%d", &ring[i]);
    for(int i = 1; i < n; i++){
        gcd = ring[0] > ring[i] ? g_gcd(ring[0], ring[i]) : g_gcd(ring[i], ring[0]);
        printf("%d/%d\n", ring[0]/gcd, ring[i]/gcd);
    }
    return 0;
}