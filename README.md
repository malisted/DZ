# DZ

#include <stdio.h>
#include <stdbool.h>


int main(const int const argc, const char * argv[]){
    int number;
    printf("number: ");
    scanf("%d", &number);
    int fact;
    fact = number;
    for (int i = 1; i < number; i++){
        fact *= number - i;
    }

    printf("Result: %d\n", fact);
    return 0;
}
