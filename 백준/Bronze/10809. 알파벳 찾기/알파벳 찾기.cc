#include<stdio.h>
#include<string.h>
int main()
{
    char word[100] = {0};
    scanf("%s", word);
    for(int i = 97; i < 123; i++){
        int j = 0;
        while(word[j]){
            if(word[j] == (char)i)
                break;
            else
                j++;
        }
        if(word[j] == (char)i)
            printf("%d ", j);
        else
            printf("-1 ");
    }
    return 0;
}