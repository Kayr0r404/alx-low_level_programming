#include <stdio.h>

int main() {
  int password = 0;
  int i;

  // The password is encoded as a sequence of bits.
  // The first bit is 0, the second bit is 1, the third bit is 0, and so on.
  for (i = 0; i < 101; i++) {
    password |= (1 << i);
  }

  // Save the password to a file.
  FILE *fp = fopen("101-password", "w");
  fwrite(&password, sizeof(int), 1, fp);
  fclose(fp);

  return 0;
}

