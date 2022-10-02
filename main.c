#include <stdio.h>


void f_numbers1(int n){
    int num1 = 0, num2 = 1, num3;
    if (n == 0)
        printf("%d", n);
    else if(n == 1){
        printf("%d %d", n-1, n);
    }else{
        printf("0 1 ");
        for(int i = 2; i <= n; i++){
            printf("%d ", num3 = num1 + num2);
            num1 = num2;
            num2 = num3;
        }
    }   
}

int main(void){
    f_numbers1(15);
    return 0;
}