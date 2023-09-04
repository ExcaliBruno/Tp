#include "../include/fat.h"
#include "../include/fib.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/types.h>

void medirTempoFatorialRecursivo(int n) {

    struct timeval start_user_time;
    gettimeofday(&start_user_time, NULL);

    struct timeval start_sys_time;
    gettimeofday(&start_sys_time, NULL);

    
    recursive_fatorial(n);

    struct timeval end_user_time;
    gettimeofday(&end_user_time, NULL);

    struct timeval end_sys_time;
    gettimeofday(&end_sys_time, NULL);

    double user_time = (end_user_time.tv_sec - start_user_time.tv_sec) + (end_user_time.tv_usec - start_user_time.tv_usec) / 1000000.0;
    double sys_time = (end_sys_time.tv_sec - start_sys_time.tv_sec) + (end_sys_time.tv_usec - start_sys_time.tv_usec) / 1000000.0;

    printf("Tempo da função fatorial recursiva de %d: %.6f segundos (Usuário), %.6f segundos (Sistema)\n", n, user_time, sys_time);
}

// Função para medir o tempo da função fatorial iterativa.
void medirTempoFatorialIterativo(int n) {
    struct timeval start_user_time;
    gettimeofday(&start_user_time, NULL);

    struct timeval start_sys_time;
    gettimeofday(&start_sys_time, NULL);

    iterative_fatorial(n);

    struct timeval end_user_time;
    gettimeofday(&end_user_time, NULL);

    struct timeval end_sys_time;
    gettimeofday(&end_sys_time, NULL);

    double user_time = (end_user_time.tv_sec - start_user_time.tv_sec) + (end_user_time.tv_usec - start_user_time.tv_usec) / 1000000.0;
    double sys_time = (end_sys_time.tv_sec - start_sys_time.tv_sec) + (end_sys_time.tv_usec - start_sys_time.tv_usec) / 1000000.0;

    printf("Tempo da função fatorial iterativa de %d: %.6f segundos (Usuário), %.6f segundos (Sistema)\n", n, user_time, sys_time);
}

// Função para medir o tempo da função Fibonacci recursiva.
void medirTempoFibonacciRecursivo(int n) {
    struct timeval start_user_time;
    gettimeofday(&start_user_time, NULL);

    struct timeval start_sys_time;
    gettimeofday(&start_sys_time, NULL);

    recursive_fibonacci(n);

    struct timeval end_user_time;
    gettimeofday(&end_user_time, NULL);

    struct timeval end_sys_time;
    gettimeofday(&end_sys_time, NULL);

    double user_time = (end_user_time.tv_sec - start_user_time.tv_sec) + (end_user_time.tv_usec - start_user_time.tv_usec) / 1000000.0;
    double sys_time = (end_sys_time.tv_sec - start_sys_time.tv_sec) + (end_sys_time.tv_usec - start_sys_time.tv_usec) / 1000000.0;

    printf("Tempo da função Fibonacci recursiva de %d: %.6f segundos (Usuário), %.6f segundos (Sistema)\n", n, user_time, sys_time);
}

// Função para medir o tempo da função Fibonacci iterativa.
void medirTempoFibonacciIterativo(int n) {
    struct timeval start_user_time;
    gettimeofday(&start_user_time, NULL);

    struct timeval start_sys_time;
    gettimeofday(&start_sys_time, NULL);

    iterative_fibonacci(n);

    struct timeval end_user_time;
    gettimeofday(&end_user_time, NULL);

    struct timeval end_sys_time;
    gettimeofday(&end_sys_time, NULL);

    double user_time = (end_user_time.tv_sec - start_user_time.tv_sec) + (end_user_time.tv_usec - start_user_time.tv_usec) / 1000000.0;
    double sys_time = (end_sys_time.tv_sec - start_sys_time.tv_sec) + (end_sys_time.tv_usec - start_sys_time.tv_usec) / 1000000.0;

    printf("Tempo da função Fibonacci iterativa de %d: %.6f segundos (Usuário), %.6f segundos (Sistema)\n", n, user_time, sys_time);
}

int main(int argc, char *argv[])
{
  
    int n = atoi(argv[1]);
    
    printf("Tempo das funções interativas e recursivas \n");

    for(int i = 0; i <= n; i++){
        printf("Iteração %d\n", i);
        recursive_fatorial(i);
        printf("Fatorial recursivo: %d\n", recursive_fatorial(i));
        medirTempoFatorialRecursivo(i);
        iterative_fatorial(i);
        printf("Fatorial iterativo: %d\n", iterative_fatorial(i));
        medirTempoFatorialIterativo(i);
        recursive_fibonacci(i);
        printf("Fibonacci recursivo: %d\n", recursive_fibonacci(i));
        medirTempoFibonacciRecursivo(i);
        iterative_fibonacci(i);
        printf("Fibonacci iterativo: %d\n", iterative_fibonacci(i));
        medirTempoFibonacciIterativo(i);
        printf("\n\n");
    }
    
    return 0;
}