#include<stdio.h>
int main()
{
    int t, count = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int num;
        scanf("%d", &num);
        
        for(int j = 2; j <= num; j++){
            if(num == j)
                count++;
            if(num%j == 0)
                break;
        }
    }
    printf("%d\n", count);
    return 0;
}