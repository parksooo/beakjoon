#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if(num1 < num2)
        return -1;
    if(num1 > num2)
        return 1;
    return 0;
}
int main()
{
    int num;
    int arr[1000000];
    scanf("%d", &num);
    
    for(int i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    qsort(arr, num, sizeof(int), compare);
    
    for(int i = 0; i < num; i++)
        printf("%d\n", arr[i]);
    return 0;
}