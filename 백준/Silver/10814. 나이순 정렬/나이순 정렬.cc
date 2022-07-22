#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    int age;
    char name[101];
}Str;

int compare(const void *a, const void *b)
{
    Str str1 = *(Str *)a;
    Str str2 = *(Str *)b;
    
    if(str1.age < str2.age)
        return -1;
    if(str1.age > str2.age)
        return 1;
    return 0;
}

int main()
{
    int N;
    scanf("%d", &N);
    Str arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i].age);
        scanf("%s", arr[i].name);
    }
    
    qsort(arr, N, sizeof(Str), compare);
    
    for(int i = 0; i < N; i++){
        printf("%d ", arr[i].age);
        puts(arr[i].name);
    }
    return 0;
}