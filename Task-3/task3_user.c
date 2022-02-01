#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <crypt.h>

#define MAX_BUFF 500

int main(int argc, char **argv){

  /*************************************************************
   Implement the user program that can be invoked by the
   driver program to establish chat communication channel
   bwtween two user.

   please implement your program which may take 4 arguments
   as follows

   argv[1]: read handle of channel
   argv[2]: write handle of channel
   argv[3]: chat content
   argv[4]: file to store other party message

   However, you are free to switch these paramenter in
   any order. If you follow this signature, then we can
   suppy our user implementation to check the functionlity
   of driver programm when you are not able to complee user
   program.

   ==================================================
   Encryption decryption use and Key setup

   KEYS my_key;
   my_key.key_a = 10;  // seting key component key_a
   my_key.key_a = 10; // seting key component key_b

   char *msg = "How are you";
   encryptMessage(msg, my_key, strlen(msg));  // encrypting the plain message available in msg buffer and writing the cypher text in the same buffer i.e., msg

   encryptMessage(msg, my_key, strlen(msg));  // encrypting the cyphertext text available in msg buffer and writing the decyphered (plain) text in the same buffer i.e., msg

  *************************************************************/

  if(argc < 5)
  {
    perror("Required 4 arguments\n");
    exit(0);
  }

  int readfd = atoi(argv[1]);    // read handle of channel
  int writefd = atoi(argv[2]);  // write handle of channel
  char *chat_file = argv[3];    // chat content file
  char *store_file = argv[4];   // store file
  KEYS my_key, party_key;     // To set your and other user secure key
  FILE *content, *store;      // file stream to read your chat content and store other user's message

  // Start your implementation
  exit(0);
}
