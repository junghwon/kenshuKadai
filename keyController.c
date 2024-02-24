#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdbool.h>
#include "keyControllerClass.h"

// --- method
static void scanKey (keyController_t *this)
{
    this->keyCodeBuff = getchar();
    if (this->keyCodeBuff != '\n') {
        this->scaned = true;
        this->keyCode = this->keyCodeBuff;
    } else {
        this->scaned = false;
    }
}

static int asciiToVinaly (keyController_t *this)
{
    int rsp = 0;

    if (this->keyCode >= 0x30) {
        rsp = this->keyCode - 0x30;
    }
    
    return (rsp);
}

// --- groval function
void keyController_Constructor (keyController_t *this)
{
    this->keyCodeBuff = ' ';
    this->keyCode = ' ';
    this->scaned = 0;
    
    this->scanKey = &scanKey;
    this->asciiToVinaly = &asciiToVinaly;
}