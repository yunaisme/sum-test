#include "sum.h"

int sum(int n) {
    int rest = 0;
    for (int i=1; i<=n; i++){
        rest += i;
    }
    return rest;
}