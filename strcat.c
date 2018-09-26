// The C library function char *strcat(char *dest, const char *src)
// appends the string pointed to by src to the end of the string pointed to by dest.

#include <stdio.h>
#include <string.h>

int main () {
  char dest[20] = "destination ";
  char src[20] = "source ";

  printf("first: %s \n", dest);
  printf("second: %s \n", src);

  strcat(dest, src);
  printf("concatenated: %s \n", dest);

  strcat(dest, "final");
  printf("final: %s \n \n", dest);

  // null string + string
  char n[10];
  char s[10] = "hi";

  printf("first: %s \n", n);
  printf("second: %s \n", s);

  strcat(n, s);
  printf("final: %s \n \n", n);

  // null string + null string
  char a[1];
  char b[1];

  printf("first: %s \n", a);
  printf("second: %s \n", b);

  strcat(a, b);
  printf("final: %s \n", a);

  return 0;
}
