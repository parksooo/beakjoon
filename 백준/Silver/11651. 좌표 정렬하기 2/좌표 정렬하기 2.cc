#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int x;
    int y;
}Point;

int compare(const void *a, const void *b)
{
    Point A = *(Point *)a;
    Point B = *(Point *)b;
    
    if(A.y > B.y)
        return 1;
    else if(A.y == B.y){
        if(A.x > B.x)
            return 1;
        else
            return -1;
    }
    return -1;
}

int main()
{
    int input;
    scanf("%d", &input);
    
    Point arr[input];
    for(int i = 0; i < input; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    
    qsort(arr, input, sizeof(Point), compare);
    
    for(int i = 0; i < input; i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    return 0;
}