#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    int count = 0, len;
    scanf("%s", word);
    len = strlen(word);
    
    char check[len];
    for(int i = 0; i < len; i++){
        if((word[i] == 'c' && word[i + 1] == '=')||(word[i] == 'c' && word[i + 1] == '-') 
           ||(word[i] == 'd' && word[i + 1] == '-')||(word[i] == 'l' && word[i + 1] == 'j')
           ||(word[i] == 'n' && word[i + 1] == 'j')||(word[i] == 's' && word[i + 1] == '=')
           ||(word[i] == 'z' && word[i + 1] == '=')){
               check[i] = 1;
               check[i+1] = 0;
               i++;
           }else if(word[i] == 'd' && word[i + 1] == 'z'&& word[i + 2] == '='){
               check[i] = 1;
               check[i + 1] = 0;
               check[i + 2] = 0;
               i += 2;
           }else
               check[i] = 1;
    }
    for(int i = 0; i < len; i++){
        count = count + check[i];
    }
    printf("%d\n", count);
    return 0;
}