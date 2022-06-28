#include<stdio.h>

int selfnumber(int n)
{
    int num = n;
    while(n > 0)
    {
        num = num + n%10;
        n = n/10;
    }
    return num;
}
int main()
{
    int arr[10001] = { 0 };
    int result;
    for(int i = 0; i < 10001; i++){
        result = selfnumber(i);
        if(result < 10001)
            arr[result] = 1;
    }
    for(int i = 0; i < 10001; i++){
        if(arr[i] != 1)
            printf("%d\n", i);
    }
    return 0;
}