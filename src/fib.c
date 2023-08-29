#include "../include/fib.h"


int fibonacci(int n){
    int i, fib = 1, fib_ant = 0, aux;
    for(i = 1; i < n; i++){
        aux = fib;
        fib += fib_ant;
        fib_ant = aux;
    }
    return fib;
}

int fibonacci_rec(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}