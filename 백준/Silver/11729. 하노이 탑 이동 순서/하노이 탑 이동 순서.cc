#include<stdio.h>
#include<math.h>
void hanoi(int n, int start, int via, int to)
{
    if(n == 1){
        printf("%d %d\n", start, to);
        return ;
    }
    hanoi(n - 1, start, to, via);
    hanoi(1, start, via, to);
    hanoi(n - 1, via, start, to);
}
int main()
{
    int num, count;
    scanf("%d", &num);
    count = pow(2, num) - 1;
    printf("%d\n", count);
    hanoi(num, 1, 2, 3);
    
    return 0;
}