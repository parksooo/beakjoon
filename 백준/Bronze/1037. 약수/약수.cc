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
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    
    printf("%d", arr[0] * arr[n-1]);
    return 0;
}