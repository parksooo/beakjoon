#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    int num1, num2;
    num1 = *(int *)a;
    num2 = *(int *)b;
    
    if(num1 < num2)
        return -1;
    if(num1 > num2)
        return 1;
    return 0;
}

int binarysearch(int *str, int size, int value)
{
    int left = 0, right = size - 1, mid;
    while(left <= right)
    {
        mid = (left + right)/2;
        if(str[mid] < value)
            left = mid + 1;
        else if(str[mid] > value)
            right = mid - 1;
        else
            return 1;
    }
    return 0;
}

int main()
{
    int num1, num2;
    scanf("%d", &num1);
    int arr[num1];
    for(int i = 0; i < num1; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &num2);
    int arr2[num2];
    for(int i = 0; i < num2; i++)
        scanf("%d", &arr2[i]);
    
    qsort(arr, num1, sizeof(int), compare);
    for(int i = 0; i < num2; i++){
        if(binarysearch(arr, num1, arr2[i]))
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}