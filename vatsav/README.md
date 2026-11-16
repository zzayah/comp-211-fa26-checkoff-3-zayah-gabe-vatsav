# XOR Encryption

XOR encryption is a simple encryption technique that uses the bitwise exclusive OR (`^`) operator to transform readable data (plaintext) into encrypted data (ciphertext). Each character is XORed with a secret key. One important property of XOR is that applying the same key a second time recovers the original message, making the operation reversible.

## C Example

`xor_encryption.c` demonstrates XOR encryption and decryption using a C function called `xor_encrypt`. The function takes a message and an encryption key, then iterates through each character and XORs it with the key.

The main method demonstrates the process using the message `HELLO` and the key `42`. After encryption, the resulting bytes are printed in hexadecimal format. The same function is then called again with the same key to decrypt the message and recover the original text.

Use standard gcc-compilation to compile the code:

```bash
gcc xor_encryption.c -o xor
./xor
```

Running the code yields:

```text
Original: HELLO
Encrypted: 62 6F 66 66 65
Decrypted: HELLO
```

## Interpretation

XOR encryption works because of the mathematical property that XORing a value with the same key twice returns the original value:

`(A ^ B) ^ B = A`

This allows the same function and key to perform both encryption and decryption.

Although XOR encryption is simple and demonstrates how bitwise operators can manipulate data, using a fixed or repeated key can make encryption vulnerable to attacks. If the same key is used to encrypt multiple messages, an attacker can XOR the ciphertexts together to eliminate the shared key and expose relationships between the original messages.

A special application of XOR is the one-time pad, which can provide perfect secrecy when a truly random key is as long as the message, kept secret, and never reused.

This program is a small demonstration of XOR encryption in C. It encrypts and decrypts a string in memory rather than creating an encrypted file or implementing a complete secure encryption system.

## Reference

- [XOR cipher (Wikipedia)](https://en.wikipedia.org/wiki/XOR_cipher)
- [Bitwise operations in C (cppreference)](https://en.cppreference.com/w/c/language/operator_arithmetic)
- [Symmetric encryption reference slides](https://www.slideserve.com/dlawrence/overview-of-symmetric-encryption-powerpoint-ppt-presentation)