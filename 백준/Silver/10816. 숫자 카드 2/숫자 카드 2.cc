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
int my_lower(int *arr, int size, int value)
{
    int left = 0, right = size -1, mid;
    while(left < right){
        mid = (left + right)/2;
        if(arr[mid] >= value)
            right = mid;
        else
            left = mid + 1;
    }
    return right;
}
int my_upper(int *arr, int size, int value)
{
    int left = 0, right = size - 1, mid;
   
    while(left < right){
        mid = (left + right)/2;
        if(arr[mid] > value)
            right = mid;
        else
            left = mid + 1;
    }
    if(arr[right] == value)
        return right + 1;
    
    return right;
}
int main()
{
    int n, m;
    int lower, upper;
    scanf("%d", &n);
    int have[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &have[i]);
    }
    scanf("%d", &m);
    int want[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &want[i]);
    }
    
    qsort(have, n, sizeof(int), compare);
    
    for(int i = 0; i < m; i++){
        lower = my_lower(have, n, want[i]);
        upper = my_upper(have, n, want[i]);
        printf("%d ", upper - lower);
    }
    return 0;
}