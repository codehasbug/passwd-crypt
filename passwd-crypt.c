#include <stdio.h>
#include <crypt.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: %s [password without encrypt] [input 0 generate a random salt or input a specific salt]\n", argv[0]);
    return -1;
  }

  if(!strcmp(argv[2], "0")) {
    strcpy(argv[2], crypt_gensalt("SHA512", 0, NULL, 0));
  }

  char *buf = crypt((const char *)argv[1], (const char *)argv[2]);
  if(buf == NULL) {
    printf("Encrypt error!\n");
    return -1;
  }
  
  printf("%s", buf);
  return 0;
}
