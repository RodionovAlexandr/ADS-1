// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
uint64_t count, pr;
pr = 2;
count = 1;
while (true) {
if (n == count) {
return pr;
}
pr++;
if (!checkPrime(pr)) count++;
}  
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
if (value == 1) return 2;
if (value == 2) return 3;
if (checkPrime(value) == 1) value += 1;
for (int i = value; i <= 10000; i++)
if (checkPrime(i)) {
return i;
}
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
if (value == 1) return 2;
if (value == 2) return 3;
if (checkPrime(value) == 1) value += 1;
for (int i = value; i <= 10000; i++)
if (checkPrime(i)) {
return i;
}
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t allin = 0;
for(uint64_t i = 1; i < hbound; i++)
if (checkPrime(i) == 1) {
allin = allin + i;
}
return allin;
}
