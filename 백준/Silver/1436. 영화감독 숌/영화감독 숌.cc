#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    
    int count = 0, answer = 0, temp = 0;
    while(count != num){
        answer++;
        temp = answer;
        while(temp != 0){
            if(temp % 1000 == 666){
                count++;
                break;
            }else
                temp /= 10;
        }
    }
    printf("%d\n", answer);
    return 0;
}