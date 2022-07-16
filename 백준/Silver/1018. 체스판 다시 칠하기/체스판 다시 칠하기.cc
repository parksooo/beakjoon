#include<stdio.h>
#define minF(a,b) a < b ? a : b

int main(){
    int x, y;
    char board[50][50];
    int min = 65;
    scanf("%d %d", &y, &x);
    
    for(int i = 0; i < y; i++){
        scanf("%s", &board[i]);
    }
    int countb = 0, countw = 0;
    for(int i = 0; i < y - 7; i++){
        for(int j = 0; j < x - 7; j++){
            countb = 0;
            countw = 0;
            for(int a = i; a < i + 8; a++){
                for(int b = j; b < j + 8; b++){
                    if((a+b)%2 == 0){
                        if(board[a][b] == 'B')
                            countw++;
                        else
                            countb++;
                    }else{
                        if(board[a][b] == 'B')
                            countb++;
                        else
                            countw++;
                    }
                }
            }
            min = minF(min, countb);
            min = minF(min, countw);
        }
    }
    printf("%d\n", min);
    return 0;
}
