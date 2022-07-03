#include<stdio.h>
int main()
{
    long a, b, c;
    long result = 1;
    scanf("%ld %ld %ld", &a, &b, &c);
    if(b >= c){
        printf("-1");
        return 0;
    }
    result = a/(c -b) + 1;
    printf("%ld", result);
    return 0;
}