// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
if (value > 1)
{
for (int i = 2; i < value; i++)
if (value % i == 0)
return false;

return true;
} else {
return false;
}
}

uint64_t nPrime(uint64_t n) {
int count = 0;
if (n == 1) return 2;
for (int i = 3; i <= 10000; i += 2) {
if (checkPrime(i)) {
count++;
if (count == (n - 1))
return i;
}
}
}

uint64_t nextPrime(uint64_t value) {
if (value == 1) return 2;
if (value == 2) return 3;
if (checkPrime(value) == 1) value += 1;
for (int i = value; i <= 10000; i++)
if (checkPrime(i)) {
return i;
}
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t allin= 0;
for(uint64_t i=1; i < hbound; i++)
if (checkPrime(i) == 1) {
allin = allin + i;
}
return allin;
}
