#include "../include/fat.h"

int fatorial(int n){
    int i, fat = 1;
    for(i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}

int fatorial_rec(int n){
    if(n == 0){
        return 1;
    }
    return n * fatorial_rec(n - 1);
}