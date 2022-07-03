#include<stdio.h>
#include<string.h>
int main()
{
    char stc[100];
    int input, len, sum = 0;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        scanf("%s", stc);
        len = strlen(stc);
        int count = 0;
        for(int j = 0; j < len; j++){
            if(len == 1){
                count += 0;
            }else if(stc[j] != stc[j + 1]){
                for(int k = 0; k < j; k++){
                    if(stc[j + 1] == stc[k])
                        count += 1;
                }
            }
        }
        if(count >= 1){
            sum += 0;
        }else
            sum += 1;
    }
    printf("%d", sum);
    return 0;
}