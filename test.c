#include <limits.h>
#include <stdio.h>

int str_to_int(const char *str) {
  int result = 0;
  int sign = 1;
  const char *p = str;

  if (*p == '-') {
    sign = -1;
    p++;
  }

  while (*p != '\0') {
    int digit = *p - '0';
    if (result > (INT_MAX - digit) / 10) {
      printf("Error: number out of range\n");
      return 0;
    }
    result = result * 10 + digit;
    p++;
  }

  if (sign == -1 && result > INT_MAX) {
    printf("Error: number out of range\n");
    return 0;
  }

  return sign * result;
}

int main() {
  char str[] = "-2147483647";
  int num = str_to_int(str);
  printf("%d\n", num);
  return 0;
}
