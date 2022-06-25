#include <stdio.h>
#include <limits.h>

unsigned long long t(unsigned long long n) {
  if (n == 1ULL) {
    return 1ULL;
  }

  if (n % 2ULL == 0ULL) {
    return t(n / 2ULL);
  } else {
    return t(n * 3ULL + 1ULL);
  }
}

int main() {
  for (unsigned long long i = 2ULL; i > 1; i++){
    printf("%llu - %llu \n", i, t(i));
  }
  
  return 0;
}
