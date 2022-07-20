#include<stdio.h>
#define size 10001
int main()
{
    int input, num;
    scanf("%d", &input);
    int count[size] = {0};
    
    for(int i = 0; i < input; i++){
        scanf("%d", &num);
        count[num]++;
    }
    for(int i = 0; i < size; i++){
        if(count[i] == 0)
            continue;
        for(int j = 0; j < count[i]; j++)
            printf("%d\n", i);
    }
    return 0;
}