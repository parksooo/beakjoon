#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int arr[50][2];
    for(int i = 0; i < num; i++){
        int weight, height;
        scanf("%d %d", &weight, &height);
        arr[i][0] = weight;
        arr[i][1] = height;
    }
    for(int i = 0; i < num; i++){    
        int grade = 1;
        for(int j = 0; j < num; j++){
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                grade++;
        }
        printf("%d ", grade);
    }
    return 0;
}