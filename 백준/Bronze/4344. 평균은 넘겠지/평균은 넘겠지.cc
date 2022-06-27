#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int student, sum = 0;
        scanf("%d", &student);
        int test[student];
        for(int j = 0; j < student; j++){
            scanf("%d", &test[j]);
            sum = sum + test[j];
        }
        double avg;
        avg = (double)sum/student;
        int count = 0;
        for(int k = 0; k < student; k++){
            if(avg < test[k])
                count++;
        }
        printf("%.3f%%\n", ((double)count/student)*100);    
    }
    return 0;
}