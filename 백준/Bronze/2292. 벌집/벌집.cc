#include<stdio.h>
int main()
{
    long input;
    long i = 1;
    scanf("%ld", &input);
    if(input == 1){
        printf("1");
        return 0;
    }else if(input > 1 && input < 8){
        printf("2");
        return 0;
    }
    while(1){
        i++;
        if(i > (input - 7)/(i + 3)/3 && i > (input - 2)/(i + 1)/3)
            break;
    }
    printf("%ld", i + 1);
    return 0;
}