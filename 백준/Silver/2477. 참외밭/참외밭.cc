#include<stdio.h>
int N;
int arr[6][2];
int count[4];

int main()
{
    int large = 1;
    int small = 1;
    
    scanf("%d", &N);
    
    for(int i = 0; i < 6; i++){
        scanf("%d %d", &arr[i][0], &arr[i][1]);
        count[arr[i][0]]++;
    }
    for(int i = 0; i < 6; i++){
        if(count[arr[i][0]] == 1){
            large *= arr[i][1];
            continue;
        }
        int n = (i + 1) % 6;
        int nn = (i + 2) % 6;
        
        if(arr[i][0] == arr[nn][0])
            small *= arr[n][1];
    }
    printf("%d", (large - small) * N);
    return 0;
}