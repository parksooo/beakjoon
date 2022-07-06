#include<stdio.h>
#include<string.h>
void reverse(char *arr)
{
    char tmp;
    int len = strlen(arr);
    for(int i = 0; i < len/2; i++){
        tmp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = tmp;
    }
}

int main()
{
    char A[100002];
    char B[100002];
    char result[100003];
    int carry = 0;
    int len = 0;
    scanf("%s %s", A, B);
    
    reverse(A);
    reverse(B);
    
    if(strlen(A) > strlen(B)){
        len = strlen(A);
    }else
        len = strlen(B);
    
    for(int i = 0; i < len; i++){
        int sum = A[i] - '0' + B[i] -'0' + carry;
        
        if(sum < 0){
            sum += '0';
        }
        if(sum > 9){
            carry = 1;
        }
        else
            carry = 0;
        result[i] = sum%10 + '0';
    }
    if(carry == 1){
        result[len] = '1';
    }
    reverse(result);
    printf("%s", result);
}