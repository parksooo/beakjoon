#include<stdio.h>
int main()
{
    int num;
    int arr[1001] = {0};
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++){
        scanf("%d", &arr[i]);
    }
    int mini = 0, temp = 0;
    for(int i = 0; i < num; i++){
        mini = i;
        for(int j = i + 1; j < num; j++){
            if(arr[mini] > arr[j]){
                temp = arr[j];
                arr[j] = arr[mini];
                arr[mini] = temp;
            }
        }
        printf("%d\n", arr[i]);
    }
    return 0;
}