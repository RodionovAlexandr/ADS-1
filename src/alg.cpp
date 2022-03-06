// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
if (value == 1) return false;
for (uint64_t i = 2; i <= value / 2; i++) {
        if (value % i == 0) {
            return false;
        }
    }
        return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
uint64_t value, num;
    value = 0;
    num = 0;
    while (num < n) {
        value++;
        if (checkPrime(value) == true) {
            num++;
        }
    }
    return value;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
int i = 0;
    while (i < 1) {
        value++;
        if (checkPrime(value) == true) {
            i += 1;
            return value;
        }
    }
    return 0;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  int sum = 0;
    for (uint64_t slag = 1; slag < hbound; slag++) {
        if (checkPrime(slag) == true) {
            sum += slag;
        }
    }
    return sum;
}
