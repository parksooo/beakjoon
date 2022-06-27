#include<stdio.h>
int main()
{
    int num, count = 0;
    int arr[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &num);
        num = num%42;
        arr[i] = num;
    }
    for(int i= 0; i < 9; i++){
        for(int j = i + 1; j < 10; j++){
            if(arr[i] == arr[j]){
                count++;
                break;
            }
        }
    }
    printf("%d", 10 - count);
    return 0;
}