#include<stdio.h>
int main()
{
    int a, input, max, mini;
    scanf("%d", &a);
    int arr[a];
    for(int i = 0; i < a; i++){
        scanf("%d", &input);
        arr[i] = input;
    }
    max = arr[0];
    for(int i = 0; i < a; i++){
        if(max < arr[i])
            max = arr[i];
    }
    mini = arr[0];
    for(int i = 0; i < a; i++){
        if(mini > arr[i])
            mini = arr[i];
    }
    printf("%d %d", mini, max);
    return 0;
}