#include <crypt.h>

char encryptChar(int a, int b, char p)
{
  char c;
	c = (p + a) % 26;
	c = (c + b) % 26;
	return c;
}

char decryptChar(int a, int b, char c)
{
	char p;
	p = (c - b);
	if ( p < 0)
		p = p + 26;
	p = (p - a) % 26;
	if ( p < 0)
		p = p + 26;
	return (char) p;
}

/* encrypt the plain text provided in msg buffer by using key and writes the cypher text back to msg buffer */
void encryptMessage(char msg[], KEYS key, size_t length)
{
    for (size_t pos = 0; pos < length; pos++)
    {
        // Avoid space to be encrypted
        if(msg[pos] >= 65 && msg[pos] <= 90)
            /* applying encryption formula ( a + x + b ) mod m
            {here x is msg[i] and m is 26} and added 'A' to
            bring it in range of ascii alphabet[ 65-90 | A-Z ] */
            msg[pos] = (char) (encryptChar(key.key_a,key.key_b, msg[pos] - 'A') + 'A');
        else if(msg[pos] >= 97 && msg[pos] <= 122)
            /* applying encryption formula ( a + x + b ) mod m
            {here x is msg[i] and m is 26} and added 'a' to
            bring it in range of ascii alphabet[ 97-122 | a-z ] */
            msg[pos] = (char) (encryptChar(key.key_a,key.key_b, msg[pos] - 'a') + 'a');
        else
            //else do not modify other characte
            msg[pos] = msg[pos];
    }
}

/* decrypt the cypher text provided in msg buffer by using key and writes the palin text back to msg buffer */
void decryptMessage(char msg[], KEYS key, size_t length)
{

    for (size_t pos = 0; pos < length; pos++)
    {
        if(msg[pos] >= 65 && msg[pos] <= 90)
            /*Applying decryption formula ( x - b - a) mod m
            {here x is cipher[i] and m is 26} and added 'A'
            to bring it in range of ASCII alphabet[ 65-90 | A-Z ] */
            msg[pos] = (char) (decryptChar(key.key_a,key.key_b, msg[pos] - 'A') + 'A');
        else if(msg[pos] >= 97 && msg[pos] <= 122)
            /*Applying decryption formula ( x - b - a ) mod m
            {here x is cipher[i] and m is 26} and added 'a'
            to bring it in range of ASCII alphabet[ 97-122 | a-z ] */
            msg[pos] = (char) (decryptChar(key.key_a,key.key_b, msg[pos] - 'a') + 'a');
        else
            //else do not modify other characte
            msg[pos] = msg[pos];
    }
}
