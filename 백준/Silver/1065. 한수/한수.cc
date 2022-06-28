#include<stdio.h>
int hansu(int n)
{
    int a, b, c;
    int count = 0;
    for(int i = 1; i < n + 1; i++){
        if(i > 0 && i < 100)
            count++;
        else if(i < 1000){
            a = i/100;
            b = (i%100)/10;
            c =(i%100)%10;
            if(a - b == b - c)
                count++;
        }
    }
    return count;
}
int main()
{
    int input;
    scanf("%d", &input);
    printf("%d", hansu(input));
    return 0;
}