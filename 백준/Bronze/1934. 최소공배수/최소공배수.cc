#include<stdio.h>
int e_gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return e_gcd(b, a % b);
}

int main()
{
    int T;
    int a, b, tmp;
    scanf("%d", &T);
    
    for(int i = 0; i < T; i++){
        scanf("%d %d", &a, &b);
        if(a < b){
            tmp = b;
            b = a;
            a = tmp;
        }
        
        printf("%d\n", (a * b) / e_gcd(a, b));
    }
    return 0;
}