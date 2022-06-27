#include<stdio.h>
int main()
{
    int input, index = 0, max = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &input);
        if(input > max){
            max = input;
            index = i;
        }
    }
    printf("%d\n%d", max, index + 1);
    return 0;
}