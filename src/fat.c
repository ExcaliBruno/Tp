#include "../include/fat.h"

int iterative_fatorial(int n){
    int i, fat = 1;
    for(i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}

int recursive_fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n * recursive_fatorial(n - 1);
}
