#ifndef CRYPT_H
#define CRYPT_H
#include <unistd.h>

typedef struct{
  int key_a;
  int key_b;
} KEYS;

void decryptMessage(char msg[], KEYS key, size_t length);
void encryptMessage(char msg[], KEYS key, size_t length);

#endif
