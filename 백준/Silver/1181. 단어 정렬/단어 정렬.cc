#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char word[51];
    int len;
}Str;

int compare(const void *a, const void *b)
{
    Str str1 = *(Str *)a;
    Str str2 = *(Str *)b;
    if(str1.len < str2.len)
        return -1;
    if(str1.len > str2.len)
        return 1;
    return(strcmp(str1.word, str2.word));
}

int main()
{
    int N;
    scanf("%d", &N);
    Str arr[N];
    for(int i = 0; i < N; i++){
        scanf("%s",arr[i].word);
        arr[i].len = strlen(arr[i].word);
    }
    
    qsort(arr, N, sizeof(Str), compare);
    
    puts(arr[0].word);
    for(int i = 1; i < N; i++){
        if(strcmp(arr[i - 1].word, arr[i].word))
            puts(arr[i].word);
    }
    return 0;
}