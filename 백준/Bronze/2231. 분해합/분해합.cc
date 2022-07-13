#include<stdio.h>
int main()
{
    int num, tmp, digit = 0, gene = 0;
    scanf("%d", &num);
    tmp = num;
    
    while(tmp > 0){
        tmp /= 10;
        digit++;
    }
    
    tmp = num;
    tmp = num - digit*9;
    if(tmp < 0)
        tmp = 0;
    int n, sum = 0;
    for(int i = tmp; i < num; i++){
        n = i;
        sum += n;
        while(n > 0){
            sum += n %10;
            n /= 10;
        }
        if(sum == num){
            gene = i;
            break;
        }
    sum = 0;
    }
    printf("%d", gene);
    return 0;
}