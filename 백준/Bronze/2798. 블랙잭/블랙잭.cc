#include<stdio.h>
int main()
{
    int a, b;
    int max = 0, sum = 0;
    int arr[100] = {0};
    scanf("%d %d\n", &a, &b);
    for(int i = 0; i < a; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < a; i++){
        for(int j = i + 1; j < a; j++){
            for(int k = j + 1; k < a; k++){
                sum = arr[i] + arr[j] + arr[k];
                if(sum > max && sum <= b)
                    max = sum;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}