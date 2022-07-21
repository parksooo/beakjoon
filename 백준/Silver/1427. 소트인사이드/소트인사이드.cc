#include<stdio.h>
#include<stdlib.h>
int arr[11] = {0};
int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if(num1 < num2)
        return 1;
    if(num1 > num2)
        return -1;
    return 0;
}

int make_arr1(int *new_arr, int N, int num_len)
{
    for(int i = 0; i < num_len; i++){
        new_arr[i] = N%10;
        N = N/10;
    }
    return *new_arr;
}

int num_long(int n)
{
    int count = 0;
    while(n > 0)
    {
        n = n/10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    scanf("%d", &num);
    int len = num_long(num);
    make_arr1(arr, num, len);
    
    qsort(arr, len, sizeof(int), compare);
    for(int i = 0; i < len; i++){
        printf("%d", arr[i]);
    }
    return 0;
}