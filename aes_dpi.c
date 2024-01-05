#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "aes.h"
#include "svdpi.h"

DPI_DLLESPEC
void aes_dpi(uint8_t* key, uint8_t* plaintext, uint8_t* ciphertext) {  
    struct AES_ctx ctx;
    AES_init_ctx(&ctx, key);
    memcpy(ciphertext, plaintext, 16);
    AES_ECB_encrypt(&ctx, ciphertext);
}
