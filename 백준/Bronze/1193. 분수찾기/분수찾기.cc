#include<stdio.h>
int main()
{
    long input, a = 0, b = 0;
    long i = 0;
    scanf("%ld", &input);
    while(1)
    {
        a = (i*(i + 3))/2 + 2;
        b = ((i + 1)*(i + 4))/2 + 1;
        if(input == 1){
            printf("1/1");
            return 0;
        }else if(input == 2){
            printf("1/2");
            return 0;
        }else if(input == 3){
            printf("2/1");
            return 0;
        }else if(input == a){
            if(i%2 == 0){
                printf("1/%ld", i + 2);
            }else
                printf("%ld/1", i + 2);
            return 0;
        }else if(input == b){
            if(i%2 == 0){
                printf("%ld/1", i + 2);
            }else
                printf("1/%ld", i + 2);
            return 0;
        }else if(input > a && input < b){
            break;
        }
        i++;
    }
    if(i%2 == 1){
        printf("%ld/%ld", i + 2 - (input - a), i + 2 - (b - input));
    }else
        printf("%ld/%ld", i + 2 - (b - input), i + 2 - (input - a));
    return 0;
}