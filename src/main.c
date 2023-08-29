#include "../include/fat.h"
#include "../include/fib.h"

#include <stdio.h>

int main(int argc, char ** argv){
    int i;
    printf("Digite um numero: ");
    scanf("%d", &i);


    printf("Fatorial de %d: %d\n", i, fatorial(i));
    printf("Fatorial recursivo de %d: %d\n", i, fatorial_rec(i));
    printf("Fibonacci de %d: %d\n", i, fibonacci(i));
    printf("Fibonacci recursivo de %d: %d\n", i, fibonacci_rec(i));
    
    return 0;
}