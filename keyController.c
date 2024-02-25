#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdbool.h>
#include "keyControllerClass.h"

// --- method
static int scanKey (keyController_t *this)
{
    scanf ("%d", &this->inputValue);
    return (1);
}

// --- groval function
void keyController_Constructor (keyController_t *this)
{
    this->inputValue = 0;    
    this->scanKey = &scanKey;
}