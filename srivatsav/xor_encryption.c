#include <stdio.h>
#include <string.h>

void xor_encrypt(unsigned char* message, int length, int key) {
    for (int i = 0; i < length; i++) {
        message[i] ^= key;
    }
}

int main(void) {
    unsigned char message[] = "HELLO";
    int key = 42;
    int length = strlen((char*)message);

    printf("Original: %s\n", message);

    xor_encrypt(message, length, key);

    printf("Encrypted: ");
    for (int i = 0; i < length; i++) {
        printf("%02X ", message[i]);
    }
    printf("\n");

    xor_encrypt(message, length, key);

    printf("Decrypted: %s\n", message);

    return 0;
}