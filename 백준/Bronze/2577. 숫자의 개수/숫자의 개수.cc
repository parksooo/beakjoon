#include<stdio.h>
int main()
{
    int a, b, c, index, sum = 1;
    int arr[10];
    scanf("%d\n%d\n%d", &a, &b, &c);
    sum = a*b*c;
    for(int i = 0; i < 10; i++){
        arr[i] = 0;
    }
    for(int i = 0; sum > 0; i++){
        index = sum%10;
        arr[index]++;
        sum = sum/10;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}