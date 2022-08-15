#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int n, cut;
    scanf("%d %d", &n, &cut);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    qsort(arr, n, sizeof(int), compare);
    
    printf("%d", arr[cut - 1]);
    return 0;
}