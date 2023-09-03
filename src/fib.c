#include "../include/fib.h"


int iterative_fibonacci(int n){
    int i, fib = 1, fib_ant = 0, aux;
    for(i = 1; i < n; i++){
        aux = fib;
        fib += fib_ant;
        fib_ant = aux;
    }
    return fib;
}

int recursive_fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}