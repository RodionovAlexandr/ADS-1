// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
uint64_t i, sqvalue;
  sqvalue = value*value;
  for (int i = 2; i <= sqvalue; i++) {
  if (value % i == 0) 
  return false; 
  }
  return true; 
}

uint64_t nPrime(uint64_t n) {
  uint64_t count, np;
  np = 2;
  count = 1;
  while (true) {
  if (n == count) {
  return np;
  }
  np++;
  if (checkPrime(np)) count++;
  }
  }

uint64_t nextPrime(uint64_t value) {
uint64_t np;
  np = value;
  while (true) {
  np++;
  if (checkPrime(np)) return np;
  }
  }

uint64_t sumPrime(uint64_t hbound) {
  if (hbound == 1 || hbound == 0) return 0;
  hbound--;
  if (checkPrime(hbound)) {
  return (hbound + sumPrime(hbound));
  }
  else 
  if (!checkPrime(hbound)) {
  return sumPrime(hbound);
  }
}
