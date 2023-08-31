#include "../include/fat.h"
#include "../include/fib.h"
#include <stdio.h>
#include <time.h>
#include <sys/time.h>

double get_real_time() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return (double)time.tv_sec + (double)time.tv_usec * 1e-6;
}

int main(int argc, char ** argv){
    int i;
    printf("Digite um numero: ");
    scanf("%d", &i);

    double start_real_time, end_real_time;
    clock_t start_cpu_time, end_cpu_time;
    double elapsed_real_time, elapsed_cpu_time;

    // Medir o tempo da função fatorial
    start_real_time = get_real_time();
    start_cpu_time = clock();
    int fat_result = fatorial(i);
    end_cpu_time = clock();
    end_real_time = get_real_time();

    elapsed_real_time = end_real_time - start_real_time;
    elapsed_cpu_time = (double)(end_cpu_time - start_cpu_time) / CLOCKS_PER_SEC;
    printf("Fatorial de %d: %d\n", i, fat_result);
    printf("Tempo real para fatorial: %.6f segundos\n", elapsed_real_time);
    printf("Tempo de usuário para fatorial: %.6f segundos\n", elapsed_cpu_time);

    // Medir o tempo da função fatorial recursiva
    start_real_time = get_real_time();
    start_cpu_time = clock();
    int fat_rec_result = fatorial_rec(i);
    end_cpu_time = clock();
    end_real_time = get_real_time();

    elapsed_real_time = end_real_time - start_real_time;
    elapsed_cpu_time = (double)(end_cpu_time - start_cpu_time) / CLOCKS_PER_SEC;
    printf("Fatorial recursivo de %d: %d\n", i, fat_rec_result);
    printf("Tempo real para fatorial recursivo: %.6f segundos\n", elapsed_real_time);
    printf("Tempo de usuário para fatorial recursivo: %.6f segundos\n", elapsed_cpu_time);

    // Medir o tempo da função fibonacci
    start_real_time = get_real_time();
    start_cpu_time = clock();
    int fib_result = fibonacci(i);
    end_cpu_time = clock();
    end_real_time = get_real_time();

    elapsed_real_time = end_real_time - start_real_time;
    elapsed_cpu_time = (double)(end_cpu_time - start_cpu_time) / CLOCKS_PER_SEC;
    printf("Fibonacci de %d: %d\n", i, fib_result);
    printf("Tempo real para fibonacci: %.6f segundos\n", elapsed_real_time);
    printf("Tempo de usuário para fibonacci: %.6f segundos\n", elapsed_cpu_time);

    // Medir o tempo da função fibonacci recursiva
    start_real_time = get_real_time();
    start_cpu_time = clock();
    int fib_rec_result = fibonacci_rec(i);
    end_cpu_time = clock();
    end_real_time = get_real_time();

    elapsed_real_time = end_real_time - start_real_time;
    elapsed_cpu_time = (double)(end_cpu_time - start_cpu_time) / CLOCKS_PER_SEC;
    printf("Fibonacci recursivo de %d: %d\n", i, fib_rec_result);
    printf("Tempo real para fibonacci recursivo: %f segundos\n", elapsed_real_time);
    printf("Tempo de usuário para fibonacci recursivo: %f segundos\n", elapsed_cpu_time);

    return 0;
}
